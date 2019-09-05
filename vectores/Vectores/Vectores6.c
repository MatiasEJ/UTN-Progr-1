//como pasarle vectores a funciones
//V es &V[0] El nombre del vector es un puntero, corresponde al primer elemento del vector
#include <stdio.h>
int main()
{
const int n=10;
typedef int vector [n];
vector v;
printf("posicion del vector %d \n",v); //coincide la direccion con el primer elemento, luego saltan de a 4 por que un entero ocupa 4 bits
printf("v[0]: %d\n",&v[0]);
printf("v[1]: %d\n",&v[1]);
printf("v[2]: %d\n",&v[2]);
printf("v+1: %d \n",v+1); //muestra la posicion de v[1] Si v+1 es &v[1], entonces v[1] es *(v+1)
return 0;
}
