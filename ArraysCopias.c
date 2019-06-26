#include <stdio.h>
#define n 10
#typedef vector[n]

// TAREA :
// Se tienen 3 arrays a b y c los 3 tienen la misma capacidad
// 1.- cargar a y b de modo tal que la cantidad de elemento que reunen entre ambos no supere n.
// 1.5- completar con ceros lo que no se carga.
// hacer la tablita para poder ubicarse

// 2.- ordenar a y b y ubicar luego los datos para que queden los elemento distintos de cero al principio

// 3.- intercalar a y b almancenandolo en c

void carga (vector,int);

void main(){
    vector a,b,c;


    carga(a,n);
    muestra(a,n);

}

void carga(vector a, int n){
    for(int i = 0;i<n;i++){
        printf("dato %d: ",i);
        scanf("%d",a[i]);
    }
}

void muestra(vector a, int n){
    for(int i = 0;i<n;i++){
        printf("dato %d: %d",i,a[i]);
    }
}
