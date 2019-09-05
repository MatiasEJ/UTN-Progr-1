#include <stdio.h>
int main ()
{
const int n=500; //Esto me permite cambiar los elementos facilmente, es más gral
int tope;//le permite al usuario definir largo del vector
typedef int vector[n];
vector V;
printf("Indique cuantos elementos necesita <a lo sumo 500>");
scanf("%d",&tope);
while (tope>500)
{printf("debe ser menor que 500, ingrese nuevamente")
scanf("%d",&tope);}
for (int i=0;i<tope;i++)
{printf("Ingrese el valor de la posicion %d",i);
    scanf ("%d",&V[i]);}


return 0;}
