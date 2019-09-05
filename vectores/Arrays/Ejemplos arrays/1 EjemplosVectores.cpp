#include<stdio.h>
#include<stdlib.h>

//en este programa se muestra el manejo basico de los arrays unidimensionales, o vectores
//un vector es una estructura de datos, es decir que es un tipo de dato formado
//por datos; un vector es un conjunto de datos del mismo tipo, ordenados 'secuencialmente'
//y almacenados de forma contigua (es decir uno al lado del otro) en memoria principal
//cada elemento se puede manipular usando el nombre del vector y la posicion del elemento
//se puede trabajar con vectores de enteros, de reales, de caracteres, con vectores de vectores.etc
//las estructuras con las que trabajaremos a partir de ahora pueden 'anidarse' y
//aumentar su complejidad tanto como sea necesario
//De aqui en mas, al hablar de 'vector' o 'array' nos referiremos a los vectores o arrays unidimensionales
//al declarar un vector se indica el tipo de dato que almacena, el nombre del vector y
//el tamano del mismo, es decir, la cantidad de elementos que contiene


int main()
{
//Declaramos un vector 4 enteros llamado v
int v[4];
//observar que entre [] se coloca la cantidad de elementos del vector
//el primer elemento es el v[0], el segundo es v[1], el tercero es v[2]y el cuarto es v[3]
//el dato que determina una posicion en el vector se llama subindice
//los subindices en C son enteros, y el primer subindice es 0 siempre
//vamos a asignar valores a los elementos del vector
v[0]=2;
v[1]=3;
//tambien valen expresiones como
v[2]=v[0]+v[1];
//o podemos ingresar valores desde teclado
printf("Ingrese valor para v[3]\n");
scanf("%d", &v[3]);

//podemos ver el contenido del vector usando un ciclo
int i;
for(i=0;i<4;i=i+1)
printf("El valor del elemento v[%d] es %d\n",i,v[i]);

//ahora vamos a ingresar todos los valores de v desde teclado
for(i=0;i<4;i=i+1)
{
  printf("Ingrese valor para v[%d]\n",i);
  scanf("%d", &v[i]);
}

//calculamos la sumatoria de los valores del vector
int suma=0;
for(i=0;i<4;i=i+1)
suma=suma+v[i];
//y emitimos el resultado
printf("La sumatoria de los elementos del vector es %d\n", suma);

//calculamos el mayoe valor almacenado en el vector
//inicializamos la variable mayor con el valor delprimer elemento
int mayor =v[0];
//y mediante un ciclo, comparamos con los otros elementos y eventualmente
//reasignamos el valor a mayor
//observar que este ciclo arranca en el subindice 1
for(i=1;i<4;i=i+1)
if (v[i]>mayor) mayor=v[i];

//y mostramos el mayor
printf("El mayor valor almacenado en el vector es %d\n", mayor);

//si queremos ordenar el vector de menor a mayor, podemos hacer lo siguiente:
//comparamos el primer elemento del vector con el segundo, y si 'estan desordenados' los
//intercambiamos; luego comparamos primer elemento y tercero, y si es necesario, intercambiamos
//luego hacemos lo mismo considerando el primer elemento y el cuarto, y asi sucesivamente
//hasta conseguir que el lemento mas pequeno este ubicado en le primer lugar
//Entonces procedemos a hacer lo mismo comparando y eventualmente intercambiando
//el segundo elemento con el tercero, luego  el segundo con el cuarto, etc, hasta que el valor correcto
//quede almacenado en el segundo lugar
//A continuacion repetimos el procedimiento para que quede el elemento correcto en el tercer lugar...etc
//Aqui esta el codigo de ese ordenamiento, que es el ordenamiento 'por seleccion'
//y corresponde a uno de los mas sencillos algoritmos para ordenar un vector
//la variable n almacenara la cantidad de elementos del vector
//las variable i y j corresponden a los subindices de los elementos que se comparan
//aux es una variable auxiliar para realizar el intercambio devalores, cuando corresponda

int n=4,j,aux;

for(i=0; i<n-1; i++ )
    for(j=i+1; j<n; j++)
        if (v[i]>v[j])
        {
           aux=v[i];
           v[i]=v[j];
           v[j]=aux;
         }
//ahora mostramos el array ordenado
printf("Vector ordenado\n");
for(i=0;i<4;i=i+1)
printf("El valor del elemento v[%d] es %d\n",i,v[i]);

system("pause");
return 0;
    }
