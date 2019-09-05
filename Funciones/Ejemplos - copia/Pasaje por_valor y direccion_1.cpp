/*pasaje 1*/
#include <stdio.h>
#include <stdlib.h>

void por_valor (int x);//la funcion por_valor en la variable x toma el valor de "a" que es este caso 1
//x++
// la x es variable local a por_valor
void por_direccion(int * x);// una dirección solo puede recibir una variable de tipo puntero
//(*x)++
//para modificar el valor de una variable se usa la direccion de dicha variable

int main(){
int a = 1;// a es una variable local a main

 por_valor(a);// main le entrega el valor de "a" a la funcion por_valor
 printf("\nEl valor de la variable a es: %d\n", a);

 por_direccion(&a);
 printf("\nEl valor de la variable a es: %d\n", a);

 /* salida:
El valor de la variable a es: 1
El valor de la variable a es: 2
*/

 getchar();
 return 0;
}

void por_valor(int n){
n++;
}

void por_direccion(int * n){
(*n)++;
 }

