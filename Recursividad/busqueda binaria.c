#include <stdio.h>
#define n 5
//parcial 19 de septiembre


typedef int vector[n];
//En c el nombres de un vector es la direccion del comienzo del primer elemento;
void carga (vector ,int );
void imprimir1 (vector, int );
void imprimir2 (vector, int );
void ordenar (vector,int);
void burbu (vector,int);

void main (){
    vector v;

    carga(v,n);
    //ordenar
    //Ordenamiento por seleccion, cantidad de comparaciones n*(n-1)/2;
    //Metodos de ordenamiento: por burbujeo, burbujeo por bandera, insercion, quick, merge, heap,


    printf("El vector:\n");
    imprimir1(v,n);
    printf("\n..\n");
    ordenar(v,n);
    imprimir1(v,n);
    int e = BBRec(v,1,5,2);
    printf("Se encontro el numero 2? : %d",e);

//    printf("\nEl vector ordenado:\n");
////    ordenar(v,n);
//    burbu(v,n);
//    imprimir(v,n);



//    // TAREA :
//    Se tienen 3 arrays a b y c los 3 tienen la misma capacidad
//    1.- cargar a y b de modo tal que la cantidad de elemento que reunen entre ambos no supere n.
//    1.5- completar con ceros lo que no se carga.
//    hacer la tablita para poder ubicarse
//
//    2.- ordenar a y b y ubicar luego los datos para que queden los elemento distintos de cero al principio
//
//    3.- intercalar a y b almancenandolo en c



}
//BUSQUEDA BINARIA POR RECURSIVIDAD

int BBRec(vector w, int pr, int ul, int bus){
    if(pr>ul){return -1;}
    else{
        int me = (pr+ul)/2;
        if (bus==w[me]){return me;}
        else if(bus > w[me]){ return BBRec(w,me+1,ul,bus);}
        else {return BBRec(w,pr,me-1,bus);}

    }

}


BUSCAR MERGE SORT



//funcion que reciba vector, la cant elementos del vector y retorne 1 si todos los elemntos son positivos o cero sino.
int posVec(vector t,int s){
    if(s==0){
        return 1;
    }else if((t[s-1])<0){
        return 0;
    }else if(t[s-1]>0){
        return posVec(t,s-1);
    }
}


void imprimir1 (vector w, int t){
    if(t>0){
        printf("%d \n",w[t-1]);
        imprimir1(w,t-1);
    }
}
void imprimir2 (vector w, int t){
    if(t>0){
        imprimir2(w,t-1);
        printf("%d \n",w[t-1]);
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
