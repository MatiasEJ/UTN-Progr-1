#include <stdio.h>

#define s 4
#define d 5
typedef float matriz [s][d];

//Se regustran temperaturas al mediodia de lunes a viernes durante 4 semanas
//c temp dia y semana esan en un papel
//
//los papeles eestan mezclados y no los vamos a odenar quizas faltan algunos registros
//queremos:
//    .-complletar la tabla con la info
//    .-temperatura promedio x semana
//    .-semana en que el lunes hizo mas frio

//temp promedio por semana s = i j = dia


//HACER EL 2-7-11-16


void promedio (matriz ma){
int i,j, flag= 0;
float acum = 0, prom =0;

    for(i=0;i<s;i++){
        for(j=0;j<d;j++){
            if(ma[i][j] != 1000){
                flag++;
                acum = acum + ma[i][j];
            }
        }
    prom = acum / flag;
    printf("\nEl promedio semana %d: %.2f",i+1,prom);
    }
}

void sem_lunes_frio(matriz ma){
int i,j, flag= 0,lun_sem=0;
float acum = 0, prom =0,max_frio;

    for(i=0;i<s;i++){
        for(j=0;j<d;j++){
            if(ma[i][j] != 1000){
               //CARGO-inicio VALORES
               max_frio = ma[i][0];

            }
        }
        if(ma[i][0] < max_frio){
                max_frio = ma[i][0];
            lun_sem = i;
        }

    }
    printf("\nLa semana mas fria fue: %d con %.2f grados", lun_sem,max_frio);
}


void inic(matriz ma){
int i,j;
    for(i=0;i<s;i++){
        for(j=0;j<d;j++){
            ma[i][j] = 1000;
        }
    }


}

void cargar(matriz ma, int nf, int nc, float temp){

    ma[nf][nc] = temp;


}

void emitir(matriz ma){
int i,j;
    for(i=0;i<s;i++){
        for(j=0;j<d;j++){
                if(ma[i][j]==1000){
                    printf(" - ");
                }else{printf("%.0f ", ma[i][j]);
            }
        }
        printf("\n");
    }
}

void leerTemp(){
}

int main (){
    matriz mat;
    float temp;
    int sem, dia;
    inic(mat);
    printf("\nindique dia: ");
    scanf("%d",&dia);
    while (dia != -1){


    printf("\nindique semana: ");
    scanf("%d",&sem);

    printf("\nindique temperatura: ");
    scanf("%f",&temp);
    mat[sem][dia] = temp;

    cargar(mat, sem, dia,temp);
    printf("\nindique dia: ");
    scanf("%d",&dia);
    }
    printf("\n L  M  M  J  V \n");
    emitir(mat);

    promedio (mat);

    sem_lunes_frio(mat);
    // SACAR EL MAXIMO
//    max = Maximo(ma, f,c);
//    printf("el maximo es: %d", max);


}

