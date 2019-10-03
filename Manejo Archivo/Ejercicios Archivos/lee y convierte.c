#include <stdio.h>
#include <ctype.h>

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

    feof()

**/

void main(){

  char texto[50],orig[50]; /* nombre de cuenta */


   FILE *ptrCf;     /* ptrCf = apuntador al archivo clientes.dat */

   if ( ( ptrCf = fopen( "texto_minus.txt", "r" ) ) == NULL ) {
      printf( "El archivo no pudo abrirse\n" );
   } /* fin de if */
   else {

    while ( !feof(ptrCf)) {
        fgets(texto,"%s",ptrCf);
        fflush(stdin);
        printf("original:\n");
        printf("%s",texto);
        for (int indice = 0; texto[indice] != '\0'; ++indice){
          texto[indice] = tolower(texto[indice]);
        }


        printf("\nA minuscula:\n");
        printf("%s",texto);



    } /* fin de lectura */


    fclose( ptrCf ); /* fclose cierra el archivo */
   } /* fin de else */

   return 0; /* indica terminación exitosa */

}

