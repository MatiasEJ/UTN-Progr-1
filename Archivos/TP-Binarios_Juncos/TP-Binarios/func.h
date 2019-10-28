#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED


typedef char palabra[30];
typedef int vec;

struct empleados{
    int legajo;
    palabra nombre[30];
    palabra apellido[30];
    vec compras[5];
    int activ;
};

typedef struct empleados empleado;

void menu();
int opciones();
void CrearArchivo(FILE *,palabra);
void intDats(empleado *);
void InsertarDatos(FILE *,palabra);
void mostrarTodo(FILE *,palabra);
void deleteReg(FILE *,palabra);
void modReg(FILE *,palabra);
void buscReg(FILE *,palabra);
int legajo(FILE *,palabra);
void listar(FILE *,palabra);
void convertir(FILE *,palabra);

#endif // FUNC_H_INCLUDED
