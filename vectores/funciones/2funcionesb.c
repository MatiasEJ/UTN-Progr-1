#include <stdio.h>
void paridad(int x)
{if (x%2 == 0)
{printf ("1");}
else
{printf ("0");}
}
int main ()
{
    int numero;
scanf ("%d", &numero);
paridad(numero);

return 0;
}
