#include <stdio.h>
int cuadrado (int x) //se pone int por delante para que devuelva un valor
{ return x*x;} //se pone return justamente para que devuelva el valor, se pueda guardar

int main ()
{
int y;
int a=5;
int b=3;

y=cuadrado (b);
printf("%d \n",y);

printf("%d \n",cuadrado(a+5));

y=cuadrado(b+1); //ojo que no lo printea solo
printf("%d \n",y);
y=cuadrado(a+b)+cuadrado(7)-20; //como la funcion es int, puedo usar la variable
printf("%d \n",y);


return 0;
}
