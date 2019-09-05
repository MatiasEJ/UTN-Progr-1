#include <stdio.h>
#include <string.h>
#define N 2
typedef char palabra[30];
typedef struct {
    palabra nom;
    palabra ape;
    int leg;
    float ventas[3];
}cliente;

typedef cliente cartera[N];

void inicializar(cartera);
void cargar(cartera,int);
void mostrar(cartera, int);
int menu();
//void mostrar(cartera,int);
//int buscar(cartera ,int,int);

int main(){
    cartera lis;
    int tope, op;
    printf("cantidad clientes: ");
    scanf("%d",&tope);
    //leer y validar tope;
//        printf("ingrese la cantidad de clientes: ");
//        scanf("&d",&tope);
//        while (tope < N){
//
//        }
    //INICIALIZAR coloca " " en la palavra o numeros
    inicializar(lis);

    op = menu(); //func menu
    while (op!=6){
        switch(op){
        case 1: cargar(lis, tope);
            break;
        case 2: mostrar(lis, tope);
            break;
//        case 3: ordenarApeNomb(lis, tope);
//            //ORDENAR APELLIDOS con estructura auxiliar
//            //ordenamos por apellido "O" por nombre
//
//            break;
//        case 4: emitirTotales(lis, tope);
//            //para cada registro muestra el total de ventas
//
//            break;
//        case 5: ;
//            break;
//            esta opcion ingresa una letra y  emite todos los registros cuyos apellidos comience con esa letra
        }
         op = menu();
    }
    printf("adios");
    return 0;

}


//void inicializar(cartera car){
//    for (int i= 0;i<N;i++){
////            car[i].nom = " ";
////            car[i].ape = " ";
//            car[i].leg = 0;
//            for(int j=0;i<3;j++){
//                    car[i].ventas[j] = 0;
//            }
//
//    }
//
//}
void cargar(cartera car, int tope){
    for (int i= 0;i<tope;i++){
            printf("\nCliente %d",i);
            printf("\n----------");
            printf("\ningrese nombre: ");
            scanf("%s",(car[i].nom));
            fflush(stdin);
            printf("ingrese apellido: ");
            scanf("%s",(car[i].ape));
            fflush(stdin);
            printf("Ingrese ventas");
            printf("\n----------\n");
            for(int j=0; j<3 ;j++){
                    printf("venta %d: ",j+1);
                    scanf("%f",&(car[i].ventas[j]));
            }

    }
}

void mostrar(cartera car, int tope){
    for (int i= 0;i<tope;i++){
            printf("\n----------\n");
            printf("Cliente %d",i);
            printf("\n----------\n");
            printf("%s",(car[i].nom));
            printf("%s",(car[i].ape));
            printf("Ventas");
            printf("\n----------\n");
            for(int j=0; j<3 ;j++){
                    printf("venta %f: ",(car[i].ventas[j]));
            }

    }
}

int menu(){
    int op;
    printf("\n----------\n");
    printf("\nMENU:");
    printf("\nOpcion 1: Cargar Clientes.");
    printf("\nOpcion 2: Emitir Clientes.");
    printf("\nOpcion 3: Ordenar Alfabeticamente.");
    printf("\nOpcion 4: Emitir totales por Cliente.");
    printf("\nOpcion 5: Busqueda por letra de apellido.");
    printf("\nElija opcion: ");
    scanf("%d",&op);
    fflush(stdin);
    return op;
}

