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
					fseek(pArchivo,2*sizeof(Persona),SEEK_SET);
					//while(!feof(pArchivo)){
					fread(&aux,sizeof(Persona),1,pArchivo);
					printf("%s, %d de edad\n",aux.nombre,aux.edad);
			    	//}
/*
El ejemplo anterior muestra por pantalla a la tercera persona que se encuentre en el
archivo (2*sizeof(Persona) devuelve la tercera persona, ya que la primera está en la
posición cero).*/
fclose(pArchivo);
}
system("pause");
return 0;
}
