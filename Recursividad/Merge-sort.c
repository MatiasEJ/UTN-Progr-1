#include <stdio.h>
#define n 5
//parcial 19 de septiembre


typedef int vector[n];
//En c el nombres de un vector es la direccion del comienzo del primer elemento;
void carga (vector ,int );
float suma (vector, int);

void main (){
    vector v;
    float sumaVector;

    carga(v,n);


    printf("El vector:\n");
    imprimir1(v,n);
    sumaVector = suma(v,n);
    printf("\n..\n");

    printf("La suma del vector es: %.2f",sumaVector);




}

//escribir una funcion recursiva que reciba un vector de float v,
//el tamaño del mismo int N y retorne la suma de los elementos del mismo

float suma (vector v, int x){
    if(x == 0){
        return 0;
    }else{
        return v[x-1]+suma(v,x-1);
    }
}

void ms (vector v, int p, int u){
    if (p<u){
        int me=(p+u)/2;
        ms(v,p,me); //"LADO IZQUIERDO"
        ms(v,me+1,u); //"LADO DERECHO"
        Interc(v,p,me,u); //Funcion que compara vectores con vector aux temporal.
    }
}







void imprimir1 (vector w, int t){
    if(t>0){
        printf("%d \n",w[t-1]);
        imprimir1(w,t-1);
    }
}



void carga (vector w,int t){
    int i;
    for(i=0;i<t;i++){
        printf("\nIngrese el valor de v[%d]: ",i);
        scanf("%d",&w[i]);
    }
}

