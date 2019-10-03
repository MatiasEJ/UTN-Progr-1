#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
				  char nombre[25];
				  int edad;
				 }Persona;

int main(){
Persona per[10];
int i=0;
FILE *pArchivo;
pArchivo=fopen("c:datos.txt","wb");
if(pArchivo!=NULL){
				do{
				fflush(stdin); 
				printf("Introduzca el nombre de la persona: ");
				
				scanf("%s",per[i].nombre);
				if(strlen(per[i].nombre)>0){
											printf("Introduzca la edad");
											scanf("%d",&(per[i].edad));
											fwrite(&per[i],sizeof(Persona),1,pArchivo);
											i++;
											}
				}while (strlen(per[i-1].nombre)>0 && i<=3);
fclose(pArchivo);
}
else{printf("Error en la apertura del archivo");}
system("pause");
return 0;
}
