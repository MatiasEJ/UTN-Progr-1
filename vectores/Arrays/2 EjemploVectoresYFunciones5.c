#include<stdio.h>
#include<stdlib.h>
//en este programa se mostrara el uso de las funciones aplicadas a vectores
//se presenta un programa que permite cargar un vector, ordenar su contenido de forma creciente, 
//mostrar el mayor elemento y todas las posiciones en las que aparece ese maximo
//Recordar que el nombre de un vector ES su direccion de comienzo
//Por lo tanto, cuando se pasa un vector a una funcion siempre se esta pasando 
//la direccion  de comienzo del mismo; es decir, el vector siempre
//pasa 'por puntero' a las funciones, ya sea que estas alteren o no el contenido del vector
//En algunos libros se puede encontrar la expresion 'un vector siempre pasa por referencia'
//nosotros preferimos no usarla, porque el concepto de refernecia es muy preciso en C++
//y no corresponde a un puntero

//En este archivo, antes de main colocaremos los prototipos de las funciones, y abajo de main,
//estan las definiciones completas de las funciones

//L aprimera funcion que mostramos permite cargar el array de reales
//Recibe como argumento el array y un entero correspondiente al tamanho del mismo
//la notacion [] indica que se recibe un vector pero se omite el tamanho del mismo; 
//ya que entre los corchetes no hay valor; este tamanho 
//se indica con el segundo parametro

void CargaVec (float [], int );

//Esta funcion ordena el vector

void OrdenaVec (float [], int );

//Esta funcion determina el valor del mayor elemento

float MayorEleVec (float[], int );

//Esta funcion emite las posiciones en la scuales esta el valor indicado

void EmiteValVec (float [], int , float);

//Esta funcion emite el vector

void EmiteVec (float [], int );

//Ahora va main

int main()
{
 const int m=10; //declaramos una constante para el tamanho del vector
 //de esta forma, con solo alterar esta linea podemos trabajar con un vector de otro tamanho   
 float Mayor; //esta variable es para guardar el mayor elemento del vector   
 //aca va la declaracion del vector
 float v[m];
 //ingresamos los valores del vector
 CargaVec(v,m);
 //lo ordenamos
 OrdenaVec(v,m);
 //Emitimos el vector ordenado
 EmiteVec(v,m);
 
 
 //vamos a cargar nuevamente el vector
 printf("Cargamos nuevamente el vector\n");
 CargaVec(v,m);
 //Buscamos el mayor valor del vector
 Mayor=MayorEleVec (v, m);
 printf("El mayor elemento del vector es %f\n", Mayor);
 //ahora se emitiran las posiciones en las que ese valor aparece
 EmiteValVec(v,m,Mayor);
 
 //como se ve , todo el programa esta modularizado  
 system ("pause") ;
 return 0;  
 }
 
 //aca van las definiciones de las funciones 
 
 void CargaVec (float w[], int s )
 //como se ve, al prototipo se\le han 'agregado' los identificadores de los parametros
 {
  int i; //variable auxiliar para el ciclo de lectura
  for(i=0;i<s;i++)
  {
                  printf("\n Ingrese el valor del elemento de posicion %d  ", i);
                  scanf("%f", &w[i]);
  }  
  
}     
  void OrdenaVec (float w[], int s)
  {
    int i,j;
    float aux; //variables auxiliares  para el ordenamiento por seleccion
    for(i=0;i<s-1;i++)
      for(j=i+1; j<s;j++)
        if (w[i]>w[j])
          {
            aux=w[i];
            w[i]=w[j];
            w[j]=aux;          
           }
     } 
     
float MayorEleVec (float w[], int s )
{
 int i;
 float may=w[0];
 for(i=1; i<s ;i++)
        if (w[i]>may)   
            may=w[i];  
 return may;           
 }

 void EmiteValVec (float w[], int s, float x)  
 {
    int i;
    printf("el valor indicado aparece en estas posiciones\n");
    for(i=0;i<s;i++)  
      if (x==w[i])
              printf("%d\n", i);
          
 } 
void EmiteVec(float w[],int s) 
{
 int i;
 for(i=0;i<s;i++)    
  printf("%f\n", w[i]); 
}
  
          

