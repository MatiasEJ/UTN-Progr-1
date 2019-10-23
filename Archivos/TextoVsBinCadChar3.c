

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
  FILE *pf;
  char cadena[50], leido[50];

  /* Abrimos el fichero para leer y escribir */
  if ((pf = fopen("a:\\cadenas.txt", "wb")) == NULL)
   {
    perror("Imposible abrir fichero");
    getch();
    exit(0);
   }
   puts("Intro cadena a grabar:\n");
   gets(cadena);

     fwrite(cadena,sizeof(cadena), 1, pf);
     if (ferror(pf))
      {
       perror("Error al escribir");
       exit(1);
      }

  fclose(pf);

  /* Escribir el contenido del fichero */
    if ((pf = fopen("a:\\cadenas.txt", "rb")) == NULL)
     {
      perror("Imposible abrir fichero");
      exit(0);
     }
   puts("Leemos el archivo:\n");

     fread(leido, sizeof(cadena), 1, pf);
     puts(leido);

  fclose(pf);
  getch();
  //system("pause");
}
