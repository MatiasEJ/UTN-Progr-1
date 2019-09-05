#include <stdio.h>
int main ()
{

int v[4];
v[0]=27;
v[1]=-5;
scanf ("%d",&v[2]);
v[3]=v[1]+v[2]-17;
for (int i=0;i<4;i++)
{printf("v[%d]:%d \n",i,v[i]);}


return 0;}
