#include<stdio.h>
#include<stdlib.h>

//Este programa ilustra el manejo de un array bidimensional de enteros

int main()
{
//declaracion de  un array bidimensional (matriz)  de 4 filas y 3 columnas
//Las filas se numeran de 0 a 3 y las columnas de 0 a 2
int mat[4][3];
//los elementos de la fila 0 son mat[0][0]  ,mat[0][1],  mat[0][2]  y mat[0][3]  
//analogamente para las otras filas

//la carga de la matriz puede hacerse desde teclado, asi
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
            
//ahora se emitira el contenido de la matriz con aspecto de rectangulo en pantalla
printf ("\nDesplegando como rectangulo\n");
for (i=0;i<4;i++)
     { 
     printf("\n");
     for (j=0;j<3;j++)
             printf("%0.3d  ",mat[i][j] );
     }

// ahora se recorrera la matriz   por columnas

printf("\nRecorrido de la matriz mat por columnas:\n");

for(i=0;i<3;i++)
   for(j=0;j<4;j++)
        printf("\n mat[%d][%d]:  %d\n", i,j,mat[j][i] );
        
//ahora cargaremos en un vector (array unidimensional)de 4 posiciones, 
//la suma de las filas de la matriz
//declaramos recien aqui (por motivos didacticos) el vector a usar
int v[4];

//inicializamos v con 0, para usar cada posicion como acumulador para cada fila de la matriz mat
for(i=0;i<4;i++)
    v[i]=0;

//este es el ciclo de carga de v
for (i=0;i<4;i++)
     for(j=0;j<3;j++)
         v[i]=v[i]+mat[i][j];
         
//se emite el contenido del vector v
printf("\nEste es el contenido del vector que almaceno la suma de las filas de la matriz\n");
for(i=0;i<4;i++)
    printf("\n v[%d] : %d \n", i, v[i]);
    
     

system ("pause");
return 0;           
    
    
    }
