#include <stdio.h>
#include <stdlib.h>

#define dia 7
#define zona 4
void carga(int *p);


int main()
{
    int matriz[dia][zona];
    int *p;
    p = matriz;
    carga(&p);


    return 0;
}

void carga(int *p){
    int d,z,temp;
    printf("dia: ");
    scanf("%d",&d);
    while(d!=-1){
        printf("zona: ");
        scanf("%d",&z);
        printf("temp: ");
        scanf("%d",&temp);

        p[d][z] = temp;
        printf("dia: ");
        scanf("%d",&d);
    }
}

void mostrar(int ma[])
{

}
