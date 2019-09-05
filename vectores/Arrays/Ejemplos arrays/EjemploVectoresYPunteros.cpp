#include<stdio.h>
#include<stdlib.h>

//Con este programa mostraremos algunas caracteristicas muy importantes de los vectores
//en C, que relacionan a los vectores con los punteros

int main()
{
 int v[5];
 //primero vamos a cargar el vector
 //por motivos didacticos, iremos declarando y definiendo las variables
 //a medida que las necesitemos en el programa
 //Recordar qu , por normas de buena programacion, lo mas correcto es definir y declarar
 //las variables al comienzo del programa
 
 int i;
 
 printf("Carga del vector\n");
 for(i=0;i<5;i++)
 {
    printf("Ingrese v[%d] ", i) ;
    scanf("%d", &v[i]);
    printf("\n");            
                 
 }
//mostramos el contenido del vector

printf("Emision del vector\n") ;
for(i=0;i<5;i++)
 
    printf("v[%d]=%d\n", i, v[i]) ;  
    
//Ahora vamos a mostrar las direcciones  correspondientes a los elementos del vector
//recordar que los valores que se van a emitir   varian de una computadora a otra

for(i=0;i<5;i++)
 
    printf("El elemento v[%d] tiene direccion %d \n", i, &v[i]) ; 
    
//y ahora , el punto central de este programa
//vamos a ver que se emite  cuando hagamos un printf de v (el nombre del vector)

printf("Esto se emite como printf de v: %d\n", v);

//Se mostro lo mismo que con &v[0] 
//eso significa que el nombre de v tiene un valor asociado, y ese valor es la direccion 
//del primer elemento del mismo
//En C, el nombre de un vector es un puntero al comienzo del vector
//El nombre de un vector ES la direccion de comienzo del mismo
//v es un PUNTERO CONSTANTE (es decir, no podemos hacer qu ev 'empiece en otra parte'
//que corresponde a la direccion del primer elemento

//entonces, v es &v[o]
//          v+1 es &v[1]
//          v+2 es &v[2] 
// y asi sucesivamente...
//lo cual implica, por la notacion de punteros qu eya conocemos, 
//que v[0] es *v
//    v[1] es *(v+1)
//    v[2] es *(v+2)
//etc...

//vamos a emitir el contenido de v usando la notacion de punteros
printf("Emision del vector usando notacion de punteros y el nombre del vector\n") ;
for(i=0;i<5;i++)
 
    printf("v[%d]=%d \n", i, *(v+i)) ;   
    
system ("pause")  ;
return 0;  
}
