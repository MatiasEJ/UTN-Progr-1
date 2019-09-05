#include <stdio.h>
#define n 10;
typedef int vec[n];
int main(){
    vec vector;
    int a = 9, b,c,d,e,f,g;
    b = factorial(a);
    b = factorial(5);
    c = factRec(4);
    d= pot(3,2);
    e= multi(3,2);
    f=mcd(15,30);
    g = posVec();
    printf("Factorial: %d", factorial(a+3));
    printf("..\n");
    printf("Factorial: %d", b);
    printf("..\n");
    printf("Factorial: %d", c);
    printf("..\n");
    printf("Potencia: %d", d);
    printf("..\n");
    printf("multi: %d", e);
    printf("..\n");
    printf("mcd: %d", f);
    printf("..\n");
    printf("positividad en vectores: %d", g);

}

int factorial(int n){
    int i, ac=1;
    for(i=1;i<=n;i++){
        ac= ac*i;
    }
    return ac;
}

int factRec(int n){
    if (n == 0){return 1;
    }else{
    return n*factRec(n-1);
    }
}

int pot(int b,int e){
    if(e == 0){
        return 1;
    }else if(e==1){
        return b;
    }else{
        return b*pot(b,e-1);
    }
}

int multi (int a, int b){
 if (b==0){
    return 1;
 }else if (b==1){
    return a;
 }else{
    return a+multi(a,b-1);
 }
}
//5*3 = 10
//5+5+5
//condiciones de cierre: b=0; b=1 => a;


int mcd(int a, int b){
    if(a<b){
        return mcd(b,a);
    }else if(a%b==0){
        return b;
    }else{
        return mcd(b,a%b); //recursividad de cola
    }

}


//funcion que reciba vector, la cant elementos del vector y retorne 1 si todos los elemntos son positivos o cero sino.
int posVec(vector t,int n){
    if(n==0){
        return 0;
    }else if(t[n-1]>0){
        return 1;
    }else{
        return posVec(t,n-1);
    }
}


