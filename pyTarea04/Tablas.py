import pandas as pd
from numpy import mean, std
import numpy as np
## Se crea la tabla
datos = {'nombre': ["John","Paul","George","Michael","Markus","Eduard","Jimmy"],
         'ciudad': ["Liverpool","New York","London","Paris","Madrid","Kansas","San Jose"],
         'Edad': [20,30,22,55,65,52,33]
         }

table_pandas = pd.DataFrame(datos)  #Se crea el dataFrame
print("\n",table_pandas)  #Se imprime la tabla

print("Median:",mean(table_pandas.loc[:,'Edad'])) #Usando la biblioteca numpy podemos calcular el primerio
print("Standar deviation:",std(table_pandas.loc[:,'Edad'])) #Calculamos desviacion estandar 

print("\n",table_pandas.sort_values(by=['nombre'],ascending=[True]))  #Ordenamos de forma ascendente la lista con la columna nombre
print("\n",table_pandas.sort_values(by=['ciudad'],ascending=[False]))  #Ordenamos de forma ascendente la lista con la columna cuidad 
