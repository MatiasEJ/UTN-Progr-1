#include<stdio.h>
#include<stdlib.h>
 
//En este programa mostraremos como se puede declarar un array de struct alumno, 
//cargarlo, ordenarlo  y emitirlo

#define TamBase 10

typedef struct 
{
 int legajo;
 char curso;
 float nota;       
}alumno;

typedef alumno vectoralu [TamBase];


int leeryvalidar (int h)
{
   int aux;
   printf("Ingrese tamanho del vector que no supere %d ", h);
   scanf ("%d", &aux);
   while (aux>h)
   {
      printf(" \n Ingrese nuevamente, menor que %d ", h);
      scanf("%d", &aux);  
        
        }     
    
  }


//Esta funcion permite emitir el contenido de la variable struct pasada por valor

void emitealu (alumno a)
{
  printf("\nLegajo: %d\n", a.legajo);
  printf("Curso: %c\n", a.curso);
  printf("Nota: %f\n", a.nota);
     
}

//esta funcion carga el contenido de una variable struct, recibiendo la direccion 
//de un struct alumno

void cargaalu (alumno *p)
{
  printf ("\nIngrese Legajo: ");
  scanf("%d", &(p->legajo));    
  printf("\nIngrese Curso: ");
  fflush(stdin);
  
  scanf("%c", &(p->curso));
  fflush(stdin); 
  printf("\nIngrese Nota: ");  
  scanf("%f", &(p->nota)) ;     
}

//Esta funcion permite cargar un vector de N struct
//el entero pasado es el tamano del array
//para hacer la tarea, llama a la funcion cargaalu

void cargavecal (vectoralu w, int N)
{
 int i;
 for(i=0;i<N;i++)
    cargaalu(&w[i]);     
 }
 
//y esta funcion emite el contenido del vector ded alumnos

void emitevecal (vectoralu w, int N)
{
 int i;
 for(i=0;i<N;i++)
    emitealu(w[i]);     
 }


//La funcion siguiente intercambia dos elementos del array de struct
//Se invocara en la funcion qu eordena el vector de struct alumno
void intercambia(vectoralu w, int d,int f)
{
   alumno aux; //auxiliar para el intercambio
   aux= w[d];
   w[d]=w[f];
   w[f]=aux;    
}
 
 
//Esta funcion permite ordenar el array de struct por legajo

void ordenavecal (vectoralu w, int N)
{
 int i,j;
 for(i=0;i<N-1;i++)    
     for(j=i+1;j<N;j++)
         if (w[i].legajo > w[j].legajo)
             intercambia(w, i, j);    
}
 
//aqui va main

int main()
{


int M= leeryvalidar(TamBase);

  
vectoralu v;;
cargavecal(v,M) ;
emitevecal(v,M) ;
//ahora se ordenara al vector para emitirlo nuevamente despues
printf("Este es el vector de struct ordenado por legajo\n");
ordenavecal(v,M) ;
emitevecal(v,M) ; 
system ("pause");
return 0;    
    
}
