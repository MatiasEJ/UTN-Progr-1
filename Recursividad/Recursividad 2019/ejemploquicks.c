#include<stdio.h>
#include<stdlib.h>
#define m 20

typedef int vector [m];


void cargar (vector v, int t)
{
int i;
for (i=0;i<t;i++)
   {
     printf ("ingrese dato posicion  %d  ", i);
     scanf("%d", &v[i]);

   }
}

void emitir (vector v, int t)
{
int i;
for (i=0;i<t;i++)
   {
     printf ("%d \n", v[i]);

   }
}


int Ubicarpivote(vector a, int pr, int ul)
 {
 int aux;
 int ppiv= pr;
 int k= pr;
 int j= k+1;
 while (j<=ul) {
 if (a[j]<a[ppiv] )
 {
 k= k+1;
 //intercambiar elementos posiciones k y j
 aux=a[k];
 a[k]=a[j];
 a[j]=aux;
 }
 j= j+1;
 }
 //intercambiarelementos posiciones k y ppiv
 aux=a[k];
 a[k]=a[ppiv];
 a[ppiv]=aux;


 return k;
 }



void quicksort (vector v, int pr, int ul)
{
 if ( ul >pr)
 {
 int pospiv = Ubicarpivote (v, pr, ul);
 quicksort (v, pr, pospiv-1);
 quicksort(v, pospiv+1, ul );
 }
}




 int main ()
 {

    int n=10;
    vector v;
    cargar (v,n);
    quicksort(v,0,n-1);
    emitir(v,n);

    return 0;


 }
