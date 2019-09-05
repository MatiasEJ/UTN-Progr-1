#include <stdio.h>
int sumaintervalo(int x,int y)
{
int suma=0;
printf ("Introduce dos valores: ");
scanf ("%d%d", &x, &y);
    if x>y
    {aux=x;
    x=y;
    y=aux;
    }//así siempre x es menor que y

for (int i=x;i<=y;i++)
{
suma=suma +i;
}
printf ("\nLa suma de los valores del intervalo es: %d", suma);
}

int main ()
{int a, b;
sumaintervalo(a,b);

}
