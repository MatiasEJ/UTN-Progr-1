#include <stdio.h>
int factorial (int x)
{
int fact=1;
for (int i=1;i<=x;i++)
{fact=fact*i;}
return fact;
}
int main ()
{
int n;
printf ("\nIntroduzca un número entero positivo: ");
scanf ("%d",&n);


printf ("\nEl factorial de %d es:%d",n,factorial(n));
return 0;
}
