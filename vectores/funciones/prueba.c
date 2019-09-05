#include <stdio.h>
void cuadrado (int x) //se pone int entre parentesis por que recibe un entero
{
    printf("%d",x*x);
}

int main ()
{
int y;
int a=5;
int b=3;

y=cuadrado (b); //valor void no se ignora como deberia ser: La funcion no devuelve nada
//entonces le estoy pidiendo al compilador que guarde algo que la funcion no devuelve

printf ("\n");
cuadrado (a);
printf ("\n");
cuadrado (a+b+1);
printf ("\n");
cuadrado (10+b);
printf ("\n");

return 0;
}
