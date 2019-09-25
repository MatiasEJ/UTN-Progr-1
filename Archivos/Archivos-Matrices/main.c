#include <stdio.h>
#include <stdlib.h>
#include "funciones-matrices.h"
#define cantAl 3

typedef char palabra[25];
typedef struct{
    palabra nombre;
    char sexo;
    float promedio;
}alumno;

typedef alumno datosAlumno[cantAl];


/**PROTOTIPOS**/
void ingresar(alumno[] ,int );
void mostrar(alumno[] ,int );


// PARCIAL 19 de SEPTIEMBRE
// funciones, vectores, strucs, ordenamientos, busquedas secuenciales y binarias

/**

EJERCICIOS DE MATRICES.
122. La “Ferretería Francesa” ha dispuesto sus artículos en un depósito que posee 50 pasillos,
donde en cada uno de ellos los estantes se numeran del 1 al 30. Por cada artículo, se tiene su
código, su ubicación (pasillo-estante), su descripción (ej. martillo) y su stock (ej. 3 unidades). Se
pide realizar un programa que disponga de un menú con las siguientes cuatro opciones:

 a) Dado un artículo que ingresa al depósito, conociendo el código del mismo el programa
deberá determinar si ya existe allí; de ser así , actualizará el stock, y en caso contrario, le
asignará una nueva ubicación (pasillo-estante) además de almacenar los datos necesarios.

 b) Dado un número de pasillo y estante, mostrar en pantalla el código, descripción y stock
del artículo que allí se encuentra; si el estante estuviese vacío, indicarlo con un mensaje.

 c) Indicar cuántos estantes vacíos hay en todo el depósito.

 d) Salir del programa.

**/


int main()
{
    datosAlumno datos;
    ingresar(datos, cantAl);
    mostrar(datos,cantAl);
//    printf("Bienvenido.");
//    printf("\na- Actualizar Stock");
//    printf("\nb- Buscar Articulo");
//    printf("\nc- Estantes vacios");
//    printf("\nd- Salir");
//    printf("\nPor favor. seleccione opcion: ");
//    scanf("%c",&opt);
//
//        switch (opt)
//        {
//        case 'a':
//            printf("ingreso codigo");
////            ingreso(codigo, ubicacion, descripcion, stock){
////            si esta, actualiza stock +1, introduzco ubicacion, tomo datos
////            sino esta, introduzco ubicacion, tomo datos
////            }
//            break;
//        case'b':
//            printf("ingreso codigo");
////            articulos()
////           codigoPasilloEstante(ubicacion){
////            muestra codigo, descripcion y stock,
////            si no hay stock, avisar
////            }
//            break;
//        case 'c':
//            printf("busqueda art");
////            contarEstantesVacios(estantes){
////            si estantes vacios = ALERTA
////             }
//            break;
//        case 'd':
//            printf("gracias adiosh");
//            break;
//        default:
//            break;
//        }

}

// a) Dado un artículo que ingresa al depósito, conociendo el código del mismo el programa
//deberá determinar si ya existe allí; de ser así , actualizará el stock, y en caso contrario, le
//asignará una nueva ubicación (pasillo-estante) además de almacenar los datos necesarios.



void ingresar(datosAlumno alumno,int cantidad){
    int i;
    float f;
    for(i=0;i<cantidad;i++){
        printf("\nnombre alumno[%d]: ",i+1);
        scanf("%s",alumno[i].nombre);
        printf("\nsexo: ");
        alumno[i].sexo = getche();
        printf("\npromedio: ");
        scanf("%f",&f);
        alumno[i].promedio = f;
    }
}

void mostrar(datosAlumno alumno,int cantidad){
    int i;
    float f;
    for(i=0;i<cantidad;i++){
        printf("\nnombre alumno[%d]: ",i+1);
        printf("%s",alumno[i].nombre);
        printf("\nsexo: %c",alumno[i].sexo);
        printf("\npromedio: %f", alumno[i].promedio);
    }
}
