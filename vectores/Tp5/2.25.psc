Algoritmo Ej25
	//Se lee un valor n seguido de n valores, se pide informar el mayor número leído 
	//y su posición, si este se repite, informar todas las posiciones.
	
	Definir n,p,may,posicion,cantposicion Como Entero
	Escribir 'Ingrese una dimensión'
	Leer n
	Dimension v[n]
	may<-0
	Para i<-1 Hasta n Con Paso 1 Hacer
		Escribir 'Ingrese valor posicional ',i
		Leer v[i]
		Si v[i]>may Entonces
			may<-v[i]
			cantposicion<-cantposicion+1
		Fin Si
	Fin Para
	
	Para i<-1 Hasta n Con Paso 1 Hacer
		Si may=v[i] Entonces
		Escribir 'Posicion', i	

		Fin Si
	Fin Para
FinAlgoritmo
