import statistics as stats ##Se importa la biblioteca statistics

##Se crean las listas
x=[3,9,20,13,50,89]
y=[20,3,67,80]

print("Para x:")  #Para la lista X
print("Mean:",stats.mean(x))   #Promedio
print("Standar deviation:",stats.pstdev(x))  #Desviacion estandar
print("Median:",stats.median(x))  #La mediana

print("\nPara y:")  #Para la lista y 
print("Mean:",stats.mean(y))       #Promedio
print("Standar deviation:",stats.pstdev(y)) #Desviacion estandar
print("Median:",stats.median(y))    #La mediana