#include <stdio.h>
int main ()
{

typedef int vector[4]; //a un array de 4 enteros le pongo de nombre vector, vector es nombre de tipo no corresponde a ningun elemento concreto
vector V;


for (int i=0;i<4;i++)
{printf("Ingrese el valor de la posicion %d",i);
    scanf ("%d",&V[i]);}


return 0;}
