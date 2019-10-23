
#include <stdlib.h>
#include <stdio.h>


int main(){
FILE *pArchivo;
int ancho=0, alto=0; /* Aquí se almacena el resultado*/

pArchivo=fopen("Nelsonhaha.gif","rb");

if(pArchivo!=NULL) 
                {
				/* Nos colocamos en el sexto byte, porque ahí está la
				información sobre la anchura y después la altura*/
				fseek(pArchivo,6,SEEK_SET);
				fread(&ancho,2,1,pArchivo);
				fread(&alto,2,1,pArchivo);
				printf("Dimensiones: Horizontal %d, Vertical %d\n", ancho,alto);
                }

system("pause");
return 0;
}
