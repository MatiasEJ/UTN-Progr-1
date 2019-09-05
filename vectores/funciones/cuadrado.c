#include <stdio.h>
void cuadrado (int x) //se pone int entre parentesis por que recibe un entero, las void muestran mensajes
{
    printf("%d",x*x);
}

int main ()
{
int a=5;
int b=3;

cuadrado (b);
printf ("\n");
cuadrado (a);
printf ("\n");
cuadrado (a+b+1);
printf ("\n");
cuadrado (10+b);
printf ("\n");

return 0;
}
