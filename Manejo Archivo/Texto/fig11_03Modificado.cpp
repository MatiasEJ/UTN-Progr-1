/* Figura 11.3: fig11_03.c- Ejemplo de creación de un archivo secuencial */
/*
1. Ejecuta el programa.
2. Busca el archivo creado, observa el contenido.
3. Vuelve a ejecutar el programa.
4. Nuevamente observa el contenido, qué sucedió?
5. Qué modo se utilizó para la apertura del archivo?. Coméntalo en el archivo fuente.
6. Qué función se utilizó para escribir en el archivo?. Coméntalo en el archivo fuente.
7. Investiga cómo funciona: !feof(stdin). (Deitel, Cap. 11).
8. Modifica el programa usando funciones.
*/

#include <stdio.h>

main()
{
   int cuenta;        /* número de cuenta */
   char nombre[30]; /* nombre de cuenta */
   float saldo;      /* saldo de la cuenta */

   FILE *ptrCf;     /* ptrCf = apuntador al archivo clientes.dat */

   if ( ( ptrCf = fopen( "11_03.txt", "w" ) ) == NULL ) {
      printf( "El archivo no pudo abrirse\n" );
   } /* fin de if */
   else {
      printf( "Introduzca el numero de cuenta, -1 para fin\n" );

      scanf( "%d", &cuenta );

    while (cuenta !=-1){
         fflush(stdin);
         printf( "Introduzca el nombre\n" );
         scanf( "%s", nombre);
         fflush(stdin);
         printf( "Introduzca el saldo.\n" );
         scanf( "%f", &saldo );
         fprintf( ptrCf, "%d %s %.1f\n", cuenta, nombre, saldo );
         printf( "Introduzca el numero de cuenta, -1 para fin\n" );
         fflush(stdin);
         scanf( "%d", &cuenta);
    }
      fclose( ptrCf ); /* fclose cierra el archivo */
   } /* fin de else */

   return 0; /* indica terminación exitosa */

} /* fin de main */
