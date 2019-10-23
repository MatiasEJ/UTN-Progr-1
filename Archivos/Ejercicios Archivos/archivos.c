#include <stdio.h>

/**
    archivos se abren, cierran y procesan
    "r" "rb" requiere la existencia del archivo (checkeo del archivo)
    "w" "wb" puede sobreescribir
    "a "ab"
    FILE *p
    p = fopen("direccion y nombre archivo",formaDeApertura);
    guarda en archivos de tipo texto (para reportes), o binarios (estructuras, contabilidad).

    Programa 1 leer de teclado un texto y guardarlo
    programa 2 lee texto convierte a minusculas


**/

void main(){
  char texto[50]; /* nombre de cuenta */

   FILE *ptrCf;     /* ptrCf = apuntador al archivo clientes.dat */

   if ( ( ptrCf = fopen( "texto_minus.txt", "w" ) ) == NULL ) {
      printf( "El archivo no pudo abrirse\n" );
   } /* fin de if */
   else {

    printf("Introduzca el texto a convertir\n");
    gets(texto);
    fflush(stdin);
    fprintf( ptrCf, "%s",texto );
    printf("\n------\n");
    fflush(stdin);

    fclose( ptrCf ); /* fclose cierra el archivo */
   } /* fin de else */

   return 0; /* indica terminación exitosa */

}
