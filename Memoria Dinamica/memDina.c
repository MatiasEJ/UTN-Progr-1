#include <stdio.h>
#include <stdlib.h>

int main (){
    int a=5, b=1, *p;
    //Solicitar espacio de memoria dinamica para almacenar un entero
    p=(int *)malloc(sizeof(int)); //retorna direccion de comienzo del espacio obtenido, sin indicar el tipo
   // ^^^^^^^ convertimos a (int)
    if(p!=NULL){*p = 57;}//chequeo del retorno de direcicon

    free (p); //libero el heap
    p= NULL; //libero la direccion en p

    int longi, *v;
    printf("largo del array: ");
    scanf("%d",&longi);
    v = (int*) malloc (longi * sizeof(int));

    v[0] = 19;
    printf("valor del array: ");
    scanf("%d",&v[1]);
    printf("%d %d",v[0],v[1]);

    free(v);
    v = NULL;


}
