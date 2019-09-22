#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED


#define N 4
#define M 7
typedef char palabra[20];
typedef int vector[N];
typedef int matriz[N][M];

void inicializar(matriz, int, int);
void cargar(matriz, int, int);
void procFil(matriz, vector, int, int);
void procCol(matriz, vector, int, int);
void ordenaEmite(vector, int);
void mostrar(matriz , int, int);





#endif // FUNC_H_INCLUDED
