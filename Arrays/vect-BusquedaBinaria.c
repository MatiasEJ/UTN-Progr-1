#include <stdio.h>
#define n 5
typedef int vector[n];
//En c el nombres de un vector es la direccion del comienzo del primer elemento;
void carga (vector ,int );
void imprimir (vector, int );
void ordenar (vector,int);
void burbu (vector,int);
//binaria
int bBinaria(vector, int, int, int);

/*
**  Suponemos un vector de N elementos desordenado, queremos un a funcion
**  que reciba el vector n y un dato y retorne:
**  La posicion en donde encontro el dato si esta, -1 si el dato no esta
*/

void pos(vector,int);

void main (){
    vector v;
    int dat;

//    tope = leeryvalidar(m);
//    cargar(v,tope);
//    emitir(v,tope);
//
//    pos = BS(v, tope, dato);

    carga(v,n);
    //ordenar
    //Ordenamiento por seleccion, cantidad de comparaciones n*(n-1)/2;
    //Metodos de ordenamiento: por burbujeo, burbujeo por bandera, insercion, quick, merge, heap,
    printf("El vector:\n");
    imprimir(v,n);
    printf("/n");
    //ORDENADO
    ordenar(v,n);
    imprimir(v,n);
    printf("....");
    //DATO A BUSCAR
    printf("\nDato a buscar:");
    scanf("%d",&dat);
    //BUSQUEDA BINARIA
    bBinaria(v,0,n,dat);

}


/*
Si el vector esta ordenado, puedo realizar una busqueda binaria.
*/

int bBinaria(vector w, int pri, int ult, int d){
    int medio, pos=-1;
    while( (pos==-1)&&(pri<=ult) ){
        medio=(pri+ult)/2;
        if( w[medio] == d){ pos=medio;}
        else if (d> w[medio]){ pri = medio+1;}
        else { ult = medio-1;}
    }
}



//ARREGLAR -->
void pos(vector w, int t){
    int i,aux;
    int flag = 0;
    for(i=0;i < n;i++){
        if( w[i] == t ){
            flag = 1;
            aux = i;
            }else{
                flag = -1;
            }
    }
    if (flag == 1){
        printf("se encontro el dato en: %d",aux);
    }else{
        printf("Se encontro el dato en: -1");
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
