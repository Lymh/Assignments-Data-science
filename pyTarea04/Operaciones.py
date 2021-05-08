from numpy import mean, std


operaciones_lista=[-9,-45,0,7,45,-100,89]  #Se crea la lista
suma_numeros_positivos=0
suma_numero_negativos=0

for i in range(len(operaciones_lista)):   #For que vaya desde i=0 hasta la cantidad de numero en la lista
    if operaciones_lista[i]>=0:      #Solo si son mayor a 0
        suma_numeros_positivos+=operaciones_lista[i]    #Suma numeros positivos

print("Suma numeros positivos:",suma_numeros_positivos)   #Imprime numeros positivos


for i in range(len(operaciones_lista)):  #For que vaya desde i=0 hasta la cantidad de numero en la lista
    if operaciones_lista[i]<=0:    #Solo si son menor a 0
        suma_numero_negativos+=abs(operaciones_lista[i]) #Suma de numeros negativos

print("Suma numeros negativos:",suma_numero_negativos)

print(sorted(operaciones_lista)) #Con el metodo sorted se ordenan los numeros de forma ascendete o descendente
                                 #sorted(iterable, key=None, reverse=False)