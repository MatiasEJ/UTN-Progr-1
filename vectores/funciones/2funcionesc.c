#include <stdio.h>
int paridad(int x,int y)
{if (x%y == 0)
{printf ("1");}
else
{printf ("0");}
}
int main ()
{
    int numero,div;
printf("Ingrese nro");
scanf ("%d", &numero);
printf("Ingrese divisor");
scanf ("%d", &div);
paridad(numero,div);

return 0;
}
