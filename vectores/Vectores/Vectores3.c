#include <stdio.h>
int main ()
{
const int n=5; //Esto me permite cambiar los elementos facilmente, es más gral
typedef int vector[n]; //a un array de 4 enteros le pongo de nombre vector, vector es nombre de tipo no corresponde a ningun elemento concreto
vector V;


for (int i=0;i<n;i++)
{printf("Ingrese el valor de la posicion %d",i);
    scanf ("%d",&V[i]);}


return 0;}
