from parte1 import procesa_archivos
from numpy import mean, std
import numpy as np
import pandas as pd
import datetime
import matplotlib.pyplot as plt
import seaborn as sns

class  analysis(procesa_archivos):
    
    def dataFrame(self):
       covid=self.countries_selected()  #Agarammos el dataFrame anterior
       return covid

    def arrange_data(self):  #Se arregla el dataFrame para que con las columnas como months_x y years_x
        cases_covid=self.countries_selected()
        cases_covid=cases_covid.T

        cases_covid = cases_covid.diff()   #Calcula la diferencia entre dias de cada mes
        cases_covid = cases_covid.drop(index='1/22/20')  #Se quita la columna de ceros 
        months = pd.DatetimeIndex(cases_covid.index).month  #se pasa el index a formato dataTime de cada month

        dates = cases_covid.assign(month_x = months)  
        years = pd.DatetimeIndex(cases_covid.index).year
        dates = dates.assign(year_x = years)

        return dates

    def statistic_measures(self):
        cases_covid=self.arrange_data()   #Se jala dates 

        cases_covid_total = cases_covid.groupby(['month_x', 'year_x']).sum()  #Se suman todos los casos
        cases_covid_promedio = cases_covid.groupby(['month_x', 'year_x']).mean() #Se saca la promedio de los casos por mes
        cases_covid_media = cases_covid.groupby(['month_x', 'year_x']).median()  #Se saca la mediana de los casos por mes
        cases_covid_desviacion = cases_covid.groupby(['month_x', 'year_x']).std() #Se saca la desviacion estandar

        cases_covid_quartile1= cases_covid.groupby(['month_x', 'year_x']).quantile([0.25])  #Se calculan los cuartile
        cases_covid_quartile2= cases_covid.groupby(['month_x', 'year_x']).quantile([0.50])
        cases_covid_quartile3= cases_covid.groupby(['month_x', 'year_x']).quantile([0.75])

        return cases_covid_total, cases_covid_promedio, cases_covid_media, cases_covid_desviacion, cases_covid_quartile1,cases_covid_quartile2,cases_covid_quartile3

    def box_DataFrame(self):
        sum, prom, medi, standar, q1, q2, q3=self.statistic_measures()  
        sum.boxplot(column=['Costa Rica', 'Guatemala','France', 'Ecuador', 'Brazil' , 'Germany']) #Se imprime el boxplot de los casos por mes
        plt.show()  #se muestra la grafica

    def cor_DataFrame(self):
        sum, prom, medi, standar, q1, q2, q3=self.statistic_measures()
        sns.heatmap(sum.corr(), annot=True)  #Se muestra la correlacion entre paises normalizadas
        plt.show() # se muestra la grafica
        
countries=['Costa Rica', 'Guatemala', 'France','Ecuador', 'Brazil' , 'Germany']
confirm=analysis ('./time_series_covid19_confirmed_global.csv',countries)
print(confirm.arrange_data())
confirm.statistic_measures()

sum, prom, medi, standar, q1, q2, q3=confirm.statistic_measures()

print(sum)
print(prom)
print(medi)
print(standar)
print(q1)
print(q2)
print(q3)

confirm.box_DataFrame()
confirm.cor_DataFrame()