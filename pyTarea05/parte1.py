import pandas as pd
import numpy as np

class procesa_archivos(): ##Creamos la clase procesa archivos

    def __init__(self,file,list):  #Constructor file y la lista de paises
        self.file=file
        self.list=list

    def get_file(self):   #Con esta funcion leemos el file
        return pd.read_csv(self.file)

    def get_dataFrame(self):   #Convertimos el file en un dataFrame
        return pd.DataFrame(self.get_file())
 
    def delete_columns(self):   #Con esta funcion borramos las columnas 'Province/State','Lat','Long'
        covidConfirmados=self.get_dataFrame()
        return covidConfirmados.drop(['Province/State','Lat','Long'],axis=1)
    
    def collect_countries(self):   #Sustraemos la lista de paises
        covidConfirmados=self.get_dataFrame()
        countries=covidConfirmados.loc[:,'Country/Region']
        return countries

    def set_countryRegion_as_index(self):   #Pasamos los paises como un index 
        covidConfirmados=self.delete_columns()
        new_covidConfirmados=covidConfirmados.set_index('Country/Region')
        return new_covidConfirmados

    def set_countries(self):      #Seleccionamos los paises que contiene la lista 'list'
        covidConfirmados=self.set_countryRegion_as_index()
        new_covidConfirmados=covidConfirmados.loc[self.list]
        return new_covidConfirmados

    def countries_selected(self):   #Unimos las francias ya que esta se compone de varias subAreas
        covidConfirmados=self.set_countries()
        covidConfirmados=covidConfirmados.groupby(covidConfirmados.index).agg(lambda m:sum(m))
        return covidConfirmados
    
countries=['Costa Rica', 'Guatemala', 'Ecuador' ,'France', 'Brazil' , 'Germany']
covidConfirmados=procesa_archivos('./time_series_covid19_confirmed_global.csv',countries)
print(covidConfirmados.countries_selected())