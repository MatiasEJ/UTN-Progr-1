/* programa archi04.c */

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

FILE *arch1;
int lista[10], contador = 0;
char nombre[] = "c:\\datos02.dat";

int main()
 {
  system("cls");
  /* abre el archivo para leer datos */
  printf("\nLeyendo datos de %s \n", nombre);
  arch1 = fopen(nombre, "w");
  if(arch1== NULL)
      printf("\nNo fue posible leer el archivo");
  else
   {
    /* lee la lista del disco */
    while(!feof(arch1) && !ferror(arch1))
     {
      lista[contador] = getw(arch1);
      contador++;
     }
    if(ferror(arch1))
     {
       printf("\nError de lectura en el dato numero %d\n", contador);
       clearerr(arch1);
     }

    /* cierra el archivo */
    fclose(arch1);
    printf("\nArchivo cerrado\n");

    /* escribe la lista de numeros en pantalla*/
    contador = 0;
    printf("Lista de datos encontrados en %s\n\n", nombre);
    while(contador< 10)
     {
      printf("%d ", contador + 1);
      printf("%d\n",lista[contador]);
      contador++;
     }
   }
  getch();
 }


