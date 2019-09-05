#include <stdio.h>
void piramide (int niveles)
{int i=1,j;
printf("ingrese los niveles");
scanf("%d",&niveles);
for(i=1;i<=niveles;i++)
{printf("%d",i);
for (j=i;j<5;j++);
printf("%d",j);}

printf("\n");

}
int main ()
{
int a;
    piramide(a);

return 0;
}
