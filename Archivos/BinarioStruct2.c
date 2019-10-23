#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
char nombre[25];
int edad;
}Persona;

int main(){
Persona aux;
FILE *pArchivo;
pArchivo=fopen("c:datos.txt","rb");
if(pArchivo!=NULL){
					/* Se usa lectura adelantada, de otro modo
					el último dato sale repetido */
					fread(&aux,sizeof(Persona),1,pArchivo);
					while(!feof(pArchivo)){
											printf("Nombre: %s, Edad: %d\n",aux.nombre, aux.edad);
											fread(&aux,sizeof(Persona),1,pArchivo);
											}
					fclose(pArchivo);
					}
else{
printf("Error en la apertura del archivo");
}
system("pause");
return 0;
}
