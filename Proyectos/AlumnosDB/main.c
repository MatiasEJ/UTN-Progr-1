#include <stdio.h>
#include <stdlib.h>
#define cantA 3

typedef char palabra[25];

typedef struct{
    int dia;
    int mes;
    int anio;
}fecha;

typedef struct{
    palabra nombre,apellido;
    fecha nac;
    int edad;
    float promedio;
}alumno;

typedef alumno datAlumno[cantA];

/** Prototipos **/
void ingreso(alumno [],int);
void muestra(alumno [],int);
void ordenEdad(alumno [],int);

int main()
{
    datAlumno datos;
    int cAlum;
    printf("ingrese la cantidad de alumnos a procesar: ");
    scanf("%d", &cAlum);
    ingreso(datos,cAlum);
    muestra(datos,cAlum);
    ordenEdad(datos,cAlum);
    muestra(datos,cAlum);
}

void ingreso(datAlumno dat,int cA){
    int i;
    float prom;
    for(i=0;i<cA;i++){
        printf("\nAlumno [%d]",i+1);
        printf("\nNombre: ");
        fflush(stdin);
        gets(dat[i].nombre);
        printf("Apellido: ");
        fflush(stdin);
        gets(dat[i].apellido);
        printf("Edad: ");
        fflush(stdin);
        scanf("%d",&dat[i].edad);
        printf("Fecha nac: DD-MM-AA ");
        scanf("%d-%d-%d",&dat[i].nac.dia,
                        &dat[i].nac.mes,
                        &dat[i].nac.anio);

        printf("Promedio: ");
        fflush(stdin);
        scanf("%f",&prom);
        dat[i].promedio = prom;
    }
}

void muestra(datAlumno dat,int cA){
    int i;
    float prom;
    for(i=0;i<cA;i++){
        printf("\nAlumno [%d]",i+1);
        printf("\nNombre completo: %s %s ",dat[i].nombre,dat[i].apellido);
        printf("\nEdad: %d",dat[i].edad);
        printf("\nFecha nac: %d-%d-%d",dat[i].nac.dia,dat[i].nac.mes,dat[i].nac.anio);
        printf("\nPromedio: %.2f",dat[i].promedio);
        printf("\n----\n");
    }
}

//Ordenar por edad
void ordenEdad(datAlumno dat, int cA){
    int i,j;
    int aux;
    alumno vecAux;
    printf("\n ----MOSTRANDO DATOS ORDENADOS por EDAD");
    for(i=0;i<cA;i++){
        for(j=0;j<cA-i-1;j++){
            if(dat[j].edad < dat[j+1].edad){
                vecAux = dat[j];
                dat[j] = dat[j+1];
                dat[j+1]=vecAux;
            }
        }
    }

}
