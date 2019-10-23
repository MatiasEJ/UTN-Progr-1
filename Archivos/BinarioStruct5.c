#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
				  int n;
                  char nombre[25];
                  double saldo;
				 }Persona;

int main(){
Persona per[4];
int i=0;
FILE *pArchivo;
pArchivo=fopen("movimientos3.bin","wb");
if(pArchivo!=NULL){
				do{
				fflush(stdin); /* Se vacía el búfer de teclado */
				printf("Introduzca el nombre de la persona:\n");
					
				scanf("%s",per[i].nombre);
				if(strlen(per[i].nombre)>0){
											printf("Introduzca el nro. de cliente:\n");
											scanf("%d",&(per[i].n));
											printf("Introduzca el saldo del cliente:\n");
											scanf("%lf",&(per[i].saldo));
											fwrite(&per[i],sizeof(Persona),1,pArchivo);
											i++;
											}
				}while (strlen(per[i].nombre)>0 && i<=3);
fclose(pArchivo);
}
else{printf("Error en la apertura del archivo");}
system("pause");
return 0;
}
