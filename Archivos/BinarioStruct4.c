#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Estructura de los registros almacenados en el archivo*/

typedef struct{
int n;
char nombre[25];
double saldo;
}Movimiento;

int main(){
FILE *f=fopen("movimientos3.bin","rb");
int nReg;/*Guarda el número de registros*/
if(f!=NULL){
			fseek(f,0,SEEK_END);
			nReg=ftell(f)/sizeof(Movimiento);
			printf("No de registros en el archivo = %d\n",nReg);
			}
else{printf("Error en la apertura del archivo\n");}
system("pause");
return 0;

}
