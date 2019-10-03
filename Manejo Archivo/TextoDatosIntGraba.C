/* programa archi03.c */

#include<stdio.h>
#include<conio.h>

FILE *arch1;
int lista[10], contador = 0;
char nombre[] = "c:\\datos02.dat";

main()
 {
  clrscr();

  /* solicita al usuario lista de numeros */
  printf("Introduzca valores para almacenar\n\n");
  while(contador< 10)
   {
    printf("%d ", contador + 1);
    scanf("%d", &lista[contador]);
    contador++;
   }
  printf("\Grabando datos en %s\n", nombre);

  /* abre el archivo para almacenar */
  arch1 = fopen(nombre, "w");
  contador = 0;

  /* escribe la lista en disco */
  while(contador < 10)
   {
    putw(lista[contador], arch1);
    contador++;
   }
  /* cierra el archivo */
  fclose(arch1);
  printf("Archivo cerrado\n");
  getch();
 }


