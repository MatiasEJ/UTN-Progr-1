#include <stdio.h>
int maximo (int x,int y,int max)
{if (x> y) {max = x;}
else max = y;
printf ("\nEl máximo de %d y %d es %d", x, y, max);}

main()
{int a, b, max;
scanf ("%d %d", &a, &b);
maximo(a,b,max);
}
