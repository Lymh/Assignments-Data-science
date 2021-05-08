import pandas as pd
from numpy import mean, std
import numpy as np
import statistics as stats
import os
import matplotlib.pyplot as plt

directorio_actual=os.getcwd()  #Directorio actual
print(directorio_actual)       #Se imprime directorio actual


def set_Data(archivo_csv):              #Con esta funcion leemos el archivos csv
    datos_est = pd.read_csv(archivo_csv)
    return pd.DataFrame(datos_est)     #Se retorna del DataFrame utulizando pandas

def delete_column(datosFrame):      #Se eliminan las columnas 'Province/State','Lat','Long'

    newDataFrame=datosFrame.drop(['Province/State','Lat','Long'],axis=1)
    return newDataFrame

def set_index(dataframe):   #Con esta funciones pasamos Country/Region como primera columna
    newDataFrame_index=dataframe.set_index('Country/Region')
    newDataFrame_index2=newDataFrame_index.loc[['Costa Rica', 'Panama', 'Colombia', 'Spain', 'Italy', 'Mexico', 'Germany']]
    return newDataFrame_index2


def plotFrame(dataFrame): #Con esta funcion imprimimos los datos del dataFrame
    x = np.linspace(0, 381, 381)
    plt.plot(x,dataFrame.iloc[0,1:382])  ##Se imprime la primera fila hasta la columna 382
    plt.plot(x,dataFrame.iloc[1,1:382])  ##Se imprime la segunda fila hasta la columna 382
    plt.plot(x,dataFrame.iloc[2,1:382])  ##Se imprime la tercera fila hasta la columna 382
    plt.plot(x,dataFrame.iloc[3,1:382])  ##Se imprime la cuarta fila hasta la columna 382
    plt.plot(x,dataFrame.iloc[4,1:382])  ##Se imprime la quinta fila hasta la columna 382
    plt.plot(x,dataFrame.iloc[5,1:382])  ##Se imprime la sexta fila hasta la columna 382
    plt.plot(x,dataFrame.iloc[6,1:382])  ##Se imprime la septima fila hasta la columna 382
    plt.legend(['Costa Rica', 'Panama', 'Colombia', 'Spain', 'Italy', 'Mexico', 'Germany']) 
    plt.xlabel('Dias desde 20/01/2020')
    plt.ylabel('Casos reportados')
    plt.show()


def Analice_Dato(archivo_csv):  #Funcion que llama a todas las funciones anteriores
    Frame=set_Data(archivo_csv)
    Frame=delete_column(Frame)
    Frame=set_index(Frame)
    plotFrame(Frame)

Analice_Dato('./time_series_covid19_confirmed_global.csv')
Analice_Dato('./time_series_covid19_deaths_global.csv')
Analice_Dato('./time_series_covid19_recovered_global.csv')
