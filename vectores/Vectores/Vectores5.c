//Escribir ciclo para emitir vector en orden inverso
//Buscar maximo y emitirlo
//emitir mensaje indicando cuantas veces aparecio ese maximo
//emitir valores pares del vector
//emitir valores de posicion par del vector

#include <stdio.h>
int main ()
{
const int n=500;
int tope,max=0,posmax=0,cantmax=0;
typedef int vector[n];
vector V;
printf("Indique cuantos elementos necesita <a lo sumo 500> \n");
scanf("%d",&tope);
while (tope>500)
{printf("debe ser menor que 500, ingrese nuevamente\n");
scanf("%d",&tope);}
for (int i=0;i<tope;i++)
{printf("Ingrese el valor de la posicion %d\n",i);
scanf ("%d",&V[i]);
if (max<V[i])
{
max=V[i];
posmax=i;
cantmax=1;
}
else if (max==V[i])
{
    cantmax++;
}

if (V[i]%2==0)
{
    printf("Numero par: %d en posicion %d\n",V[i],i);
}
}
 printf(" \n");

for(int i=tope-1;i>=0;i--)
{
    printf("%d \n",V[i]);

}
printf("Posiciones pares del vector:\n");
for(int i=0;i<tope;i++)
{
    if(i%2==0)

    {printf("%d \n",i);}

}

printf("El valor maximo del vector es %d y aparecio en la posicion %d, fue ingresado %d veces\n",max,posmax,cantmax);



return 0;}
