#include <stdio.h>
int leeyvalida(int *pa)
{
printf ("Ingrese un entero positivo");
scanf("%d",pa);
while (*pa<=0)
{
    printf("positivo! Ingrese nuevamente");
    scanf("%d",pa);
}
return *pa;
}
void Duplicar (int *x) //Uso un puntero para que modifique a a, por que la funcion recibe una copia, si paso el contenido de a se modifica una copia y no a propiamente dicha
{
    *x=*x*2;
}
int main ()
{
int a;
float b=2.5;
//funcion para leer y validar a - Una forma posible, supongamos que vamos a querer a>0
a=leeyvalida(&a);
printf("a, antes de llamar a duplicar vale %d\n",a);
Duplicar (&a);
printf("a, despues de llamar a duplicar vale %d\n",a);
return 0;
}
