#include <stdio.h>
#define n 5
typedef int vector[n];
//En c el nombres de un vector es la direccion del comienzo del primer elemento;
void carga (vector ,int );
void imprimir (vector, int );
void ordenar (vector,int);
void burbu (vector,int);
int BS (vector, int);

/*
**  Suponemos un vector de N elementos desordenado, queremos un a funcion
**  que reciba el vector n y un dato y retorne:
**  La posicion en donde encontro el dato si esta, -1 si el dato no esta
*/

void pos(vector,int);

void main (){
    vector v;
    int dat;

    carga(v,n);
    //ordenar
    //Ordenamiento por seleccion, cantidad de comparaciones n*(n-1)/2;
    //Metodos de ordenamiento: por burbujeo, burbujeo por bandera, insercion, quick, merge, heap,
    printf("El vector:\n");
    imprimir(v,n);

    printf("\nDato a buscar:");
    scanf("%d",&dat);
    pos(v,dat);
//    pos = BS(v,dat);
//    if (pos == -1){
//        printf("No se encontro el dato");
//    }else{
//        printf("Se encontro el dato en la posicion: %d",pos);
//    }










}


int BS (vector w, int d){
    int i = 0;
    while((i<n) && (w[i]!= d)){i++;}
    if ( i==n){return -1;}
    else{
        return i;
    }
}

void pos(vector w, int t){
    int i,aux;
    int flag = 0;
    for(i=0;i < n;i++){
        if( w[i] == t ){
            flag = 1;
            aux = i;
        }else{
            aux = 0;
            flag = -1;
        }
    }
    if (flag == 1){
        printf("se encontro el dato en: %d",aux);
    }else{
        printf("No se encontro el dato");
    }
}

void imprimir (vector w, int t){
    int i;
    for(i=0;i<t;i++){
        printf("\nv[%d]: %d",i,w[i]);
    }
}

void carga (vector w,int t){
    int i;
    for(i=0;i<t;i++){
        printf("\nIngrese el valor de v[%d]: ",i);
        scanf("%d",&w[i]);
    }
}

void ordenar (vector w,int t){
    int aux,i,j;
    for(i=0;i<t-1;i++){
        for(j=i+1;j<t;j++){
                if( w[i]>w[j] ){
                    //intercambio
                    aux = w[i];
                    w[i] = w[j];
                    w[j] = aux;
                }
        }
    }
}

void burbu (vector w,int t){
    int tope,i,aux;
    for(tope=t-1;tope>0;tope--){
        for (i=0;i<tope;i++){
                if( w[i]>w[i+1] ){
                    //intercambio
                    aux = w[i+1];
                    w[i+1] = w[i];
                    w[i] = aux;
                }

        }
    }
}
