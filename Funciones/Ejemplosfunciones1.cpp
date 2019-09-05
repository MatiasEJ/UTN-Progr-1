#include<stdio.h>
#include<stdlib.h>

//funcion que recibe un entero y muestra por pantalla su factorial
//esta funcion no retorna nada, solamente muestra por pantalla el factorial
//del numero pasado por argumento
void Verfactorial(int x)
{
 int f=1, aux;
 //f y aux son variables locales, solo existen mientras se esta ejecutando Verfactorial
 //"mueren" al terminar la ejecucion de esta funcion
 //x tambien es local, y "muere" al terminar la ejecucion de la funcion
 //el espacio que ocupan las variables locales se toma de la pila o stack
 //si la funcion se ejecuta varias veces, para cada ejecucion las posiciones
 //de memoria correspondientes a estas variables pueden variar
 for(aux=1;aux<=x;aux++)
  f=f*aux;
 printf("El factorial de %d es %d\n",x,f);
  }


//En este ejemplo se muestra la variacion de la sposiciones de memoria de las variables
//locales cuando se invoca a la funcion en diferentes condiciones
//la funcion recibe un valor por copia; se mostrara la ubicacion de cada variabler local
//(para que el ejemplo sea interesante , en la funcion main usada esta funcion
//ha sido invocada varias veces)

void MuestraDirec(int z)
{
  printf("la direccion de la variable local correspondiente al argumento es %d\n", &z);
  int aux;
  printf("la direccion de la variable local llamada aux  es es %d\n", &aux);

     }


void Hola ()

{
    printf("Hola\n");
}



//funcion que recibe un entero y retrona 1 si es primo y 0 si no lo es
//se invoca como Esprimo(a), siendo a el argumento de llamada

int Esprimo(int x)   //x es una copia del argumento de llamada
{
 int aux=2;
 int sigue=1;

 //aux y sigue son variables locales; existen mientras la funcion Esprimo
 //se esta ejecutando; el espacio de memoria que ocupan se toma de la zona
 //llamada pila o stack; la variable x tambien es una variable local
 //pero inicializada el valor del argumento de llamada

 while ((aux<x-1)&& (sigue==1))
    if(x%aux==0) sigue=0;
      else aux++;
 return sigue;

  }

 //funcion que recibe dos argumentos enteros y retrona el divisor comun mayor
 //usando el algoritmo de Euclides

 int DCM(int a, int b)
 {
   int r, aux;
   //r es variable local para almacenar el resto
   //aux es una variable local que puede necesitarse para eventual intercambio de las variables
   //primero analizamos si el primer argumento es mayor o igual que le segundo; si no
   //  es asi se intercambiaran sus valores usando una variable auxiliar
   if(a<b)
        {
         aux=a;
         a=b;
         b=aux;
         }
    //ahora se realiza el ciclo de divisiones sucesivas correspondiente al algoritmo

    r=a%b;
    while (r!=0)
    {
     a=b;
     b=r;
     r=a%b;
    }
    return b;

     }

//funcion que solicita un entero y lo almacena en la direccion que recibe como argumento
//la invocacion exige que se pase la direccion de la variable
//en la cual se desea realizar la lectura
void Leer (int * q)
{
  printf("Ingrese un numero entero\n") ;
  scanf("%d", q);
 }

//funcion que permite ingresar un entero y LO RETORNA
//tener en cuenta que , si bien realiza lo mismo qu ela funcion anterior,
//el codigo es diferente, y, sobre todo, LA INVOCACION ES DISTINTA
int Leer2 ()
{
 int aux; //variable local usada para la lectura
 printf("Ingrese un numero entero\n") ;
 scanf ("%d", &aux) ;
 return aux;
  }

//funcion qu erecibe un valor y lo modifica, elevandolo al cuadrado
//esta funcion no retorna nada, sino que MODIFICA el contenido de la variable
//argumento de llamada
//para poder lograr esto, se debe pasar la direccion de la variable
//cuyo contenido se quiere alterar
void Eleva2 (int *p)
{
  //p es una variable local que contiene una copia de la direccion de
  //la variable argumento de llamada
  *p= (*p)*(*p) ;
}


//funcion que recibe las direcciones de dos variables enteras y
//realiza el intercambio delos contenidos de las mismas
void Swap(int *p, int*q)
{
  int aux;  //variable auxiliar usada para el intercambio
  aux=*p;
  *p=*q;
  *q=aux;
}


//una main para ver las funciones en accion
int main()
{
int h,j,k,l,m,n;
Leer (&h);
Verfactorial(h);
printf("La direccion de la variable h es %d\n" , &h);
printf("Ahora se invocara a la funcion MuestraDirec(h) para comprobar que\n");
printf("cuando se realiza un pasaje por valor, la variable parametro local\n");
printf("tiene otra direccion\n");
MuestraDirec(h);
j=23;
//a continuacion, una posible invocacion a Esprimo
if  (Esprimo(j)==1)printf("El numero %d es primo\n",j) ;
     else  printf("El numero %d NO es primo\n",j) ;

//probamos ahora la funcion que eleva al cuadrado
printf("La variable j contiene %d\n",j);
printf("Invocamos a Eleva2\n");
Eleva2(&j);  //recordar que Eleva2 requiere la direccion de la variable a modificar
printf("La variable j ahora contiene %d\n",j);
//probamos DCM con 18 y 30
printf("Invocamos DCM(18,30)\n");
l=DCM(18,30);
printf("El DCM de 18 y 30 es %d\n",l);
//Ahora vamos a ingresar dos enteros y a intercambiarlos
//la lectura sera con la otra funcion para ingresar
m=Leer2();
printf("La variable m contiene %d\n",m);
n=Leer2();
printf("La variable n contiene %d\n",n);
//invocamos a Swap para m y n, pasando sus direcciones respectivas
Swap(&m,&n);
printf("efectuamos Swap(&m,&n)\n");
printf("La variable m ahora contiene %d\n",m);
printf("La variable n ahora contiene %d\n",n);

Hola();

system("pause");
return 0;
}





