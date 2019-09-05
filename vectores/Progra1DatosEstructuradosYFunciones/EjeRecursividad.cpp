#include<stdio.h>
#include<stdlib.h>

int factorial(int x)
{
if((x==0) || (x==1))    
    return 1;
else return x*(factorial(x-1));    
        }
        
void hanoi(int N, int o, int d, int a)
{
 if (N>0)    
     {
       hanoi (N-1, o,a,d);
       printf("LLevar un disco desde %d hasta %d\n", o,d);
       hanoi(N-1, a,d,o);             
             }  
 }  
 
int mcd(int a, int b)
{
  if (a<b)return mcd(b,a);
  else if(a%b==0)return b;
    else return mcd(b,a%b);    
} 

int potencia(int x, int n)
{
  if (n==0) return 1;
     else return (x * potencia(x,n-1));
 
}

void carga (int v[], int s )//este no se diseño recursivamente
 //como se ve, al prototipo se\le han 'agregado' los identificadores de los parametros
 {
  int i; //variable auxiliar para el ciclo de lectura
  for(i=0;i<s;i++)
  {
                  printf("\n Ingrese el valor del elemento de posicion %d  \n", i);
                  scanf("%d", &v[i]);
  }  
  
}     


void ordena (int w[], int s)  //este no se diseño recursivamente
  {
    int i,j;
    int aux; //variables auxiliares  para el ordenamiento por seleccion
    for(i=0;i<s-1;i++)
      for(j=i+1; j<s;j++)
        if (w[i]>w[j])
          {
            aux=w[i];
            w[i]=w[j];
            w[j]=aux;          
           }
     } 

void emite(int w[],int s) 
{
 int i;
 for(i=0;i<s;i++)    
  printf("%d\n", w[i]); 
}
  

int bbin(int v[], int p, int u, int d)
{
 if(p>u) return -1;
    else 
    {
    int me=(p+u)/2;    
    if (d==v[me]) return me;
      else if (d>v[me]) return bbin(v,me+1,u,d);
        else return bbin(v,p,me-1,d) ;
     }
}


int main()
{
 int a,b,c,w[10];
 printf("prueba de funciones recursivas\n");
 printf("Ingrese un entero\n");
 scanf("%d",&a);
 b=factorial(a);  //como hacer que el tamaño del dato retornado se adecue al del factorial?
 printf("El factorial de %d es %d\n", a,b);
 c= potencia(a,5);
 printf("El numero %d elevado a la 5 da  %d\n", a,c);
 a=30;
 b=18;
 printf("El mcd entre 30 y 18 es %d\n", mcd(30,18));
 printf ("Ingrese numero de discos para Torres de Hanoi\n");
 scanf("%d", &a);
 
 printf("Torres de Hanoi:\n");
 printf("Instrucciones para pasar  %d discos desde la varilla 1 hasta la varilla 3 \n", a);
 hanoi (a,1,3,2);
 printf("\n\n Ahora un ejemplo con un vector \n");
 printf("Carga del array de10 posiciones \n");
 carga (w,10);
 printf("El array se ordenara para poder aplicar la busqueda binaria\n");
 ordena(w,10);
 printf("Asi quedo el array ordenado\n");
 emite(w,10);
 printf("Ingrese elemento a buscar en el array\n");
 scanf("%d",&a);
 b=bbin(w,0,9,a);
 if (b==-1)printf("Ese dato no esta en el array\n");
     else printf("El dato esta en la posicion de subindice %d del array\n", b);
     
 system ("pause");
 return 0;    
    
    
    
    }
