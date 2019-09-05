Algoritmo Vectores
	Definir i,n,c,j,cont2,cont3 como entero
	Dimension V[6],vp[6],vf[6]
	
	Para i<-1 Hasta 6 Con Paso 1 Hacer
		Leer n
		V[i]<-n
		
	Fin Para
	c<-0
	Para i<-1 Hasta 6 Con Paso 1 Hacer
		Si V[i]>0 Entonces
			c<-c+1
		Fin Si
	Fin Para
	Escribir 'Los datos de las posiciones pares son: '
	Para i<-2 Hasta 6 Con Paso 2 Hacer
		Escribir V[i]
	Fin Para
	Escribir 'La cantidad de valores positivos es',c
	cont2<-0
	cont3<-0
	Para j<-1 Hasta 6 Con Paso 1 Hacer
		r<-jmod2
		Si r=0 Entonces
			cont2<-cont2+1
			Vp[cont2]<-V[j]
		SiNo
			cont3<-cont3+1
			Vf[cont3]<-V[j]
		Fin Si
	Fin Para
	Escribir Vp //subvector con los valores de las posiciones pares
	Escribir Vf //subvector con los valores de las posiciones impares
FinAlgoritmo
