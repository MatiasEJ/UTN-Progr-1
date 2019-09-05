#include<stdio.h>
#include<stdlib.h>

//Este programa ilustra la relacion entre las matrices y los punteros

int main()
{
//declaramos un array bidimensional (matriz)  de 4 filas y 3 columnas
//Las filas se numeran de 0 a 3 y las columnas de 0 a 2
int mat[4][3];

//Se carga la matriz
//usamos variables auxiliares i y j para recorrerla y cargarla
int i, j;
for (i=0;i<4;i++) 
     for (j=0;j<3;j++)
          {
            printf("\n Ingrese el valor de mat[%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);          
           }
//ahora se emite la matriz

printf("\nContenido de la matriz mat\n");
for (i=0;i<4;i++) 
     for (j=0;j<3;j++)
            printf("\n mat[%d][%d]:  %d\n", i,j,mat[i][j] );
            
//vamos a ver cuales son las direcciones de los elementos de la matriz

printf("\nDirecciones de los elementos de la matriz mat\n");
for (i=0;i<4;i++) 
     for (j=0;j<3;j++)
            printf("\n el elemento mat[%d][%d]esta en %d", i,j,&mat[i][j]);
            
//Ahora, emitiremos mat[0], mat[1], mat [2] y mat[3]
//como se vera, el nombre de la matriz con un solo subindice
//corresponde a la direccion de comienzo de la fila indicada por el subindice

for(i=0;i<4;i++)
  printf("\nEl valor de mat[%d] es %d \n", i, mat[i]);
  
//ahora emitiremos el valor de mat

printf("\n El valor de mat es : %d\n", mat);

//Se observa que una matriz se maneja como un array de arrays
//mat es la direccion de comienzo del array de direccione sde filas
//la direccion de cada fila es mat[i] , con un solo subindice
//cada elemento es mat[i][j]
//y la direccioo de un elemento se puede obtenerm como siempre con &mat[i][j]


// o bien...

//si mat[2] es la direccion de la fila 3, 
//entonces, usando el operador de desreferencia *, 
//se puede trabajar con mat[2][0] o con * mat[2]
//se puede trabajar con mat[2][1] o con * (mat[2]+1)
//se puede trabajar con mat[2][2] o con * (mat[2]+2)
//....etc
//como se ve en este ciclo de ejemplo

 printf("\n Contenido de la matriz :\n");
for(i=0;i<4;i++)
 for (j=0;j<3;j++)
      printf("\n mat[i][j] : %d\n", *(mat[i]+j));
      
//Siguiendo el mismo razonamiento, si mat es la direccion de comienzo 
//del array de direcciones de filas, para la fila 3

//se puede trabajar con mat[2][0]  o con *(* mat+2)
//se puede trabajar con mat[2][1]  o con *((* mat+2)+1)
//se puede trabajar con mat[2][2]  o con *((* mat+2)+2)
//.....etc

//como se ve en este otro ciclo de ejemplo

 printf("\n Contenido de la matriz :\n");
for(i=0;i<4;i++)
 for (j=0;j<3;j++)
      printf("\n mat[i][j] : %d\n", *(*(mat+i)+j));

system("pause");
return 0;
}



 
