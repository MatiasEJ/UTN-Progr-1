#include <stdio.h>

int main(){

//    int a, b =3;
//    float c;
//    char d = 'm';
//    a = 6;
//    c = 2.5;
//    float x = 3.75;
//    float *r;
//    r = &x;
//
//
//    printf("x contiene: %f y esta en: %d", *r, r);
////    printf("\na ocupa %d bytes y contiene %d",sizeof(int),b);
////    printf("\n b ocupa %d bytes",sizeof(b));
////    printf("\nc contiene %f y esta en: %d",c,&c);
////    printf("\nc ocupa %d bytes",sizeof(float));
////    printf("\nd ocupa %d bytes",sizeof(char));
////    printf("\ndoble ocupa %d bytes",sizeof(double));
//
//    int a, b;
//    int *pa; //el contenido de pa = 5
//    a = 5;
//    pa = &a; //direccion de a
//    b = *pa; // b= 5
//
//    int i, j,*p;
//    p=&i; //direccion de i
//    *p=21; //i = 21
//    p=&j; //p tiene la direccion j
//
//    *p=1; //j= 1

//    4. Declara a, b y c variables enteras, y p, q y r variables puntero a entero.
    int a, b, c;
    int *p, *q, *r;

//    a. Declara m, n variables de tipo float y s y t variables puntero a float.
    float m, n;
    float *s,*t;

//    b. Asigna a "p" la dirección de a y a q la dirección de b.
    p = &a;
    q = &b;

//    c. Asigna a b el valor 40 usando el puntero q. Mostrar el valor de b, la dirección de b , el valor de q,
//        la dirección de q y el valor contenido en la dirección almacenada en q.
    *q=40;
    printf("%d %d %d %d %d",b,&b,q,&q,*q);

//    d. Ingresar desde teclado el valor de a usando su dirección almacenada. Mostrar el valor de a, la dirección de a,
//        el valor de p, la dirección de p y el valor contenido en la dirección almacenada en p.
printf("\ningrese el valor de a: ");
scanf("%d",p);
printf("el valor de a: %d,\n la direccion de a %d, \nel valor de p %d,\n la direccion de p %d y \nel valor contenido en la direccion almacenada en p %d ",a, &a, p, &p, *p),
printf("\n\n");

//    e. Asigna a r la dirección de a.
    r = &a;

//    f. Asigna a la posición de memoria contenida en el puntero r el valor 200.
    *r = 200;
//        Mostrar el valor de a, la dirección de a , el valor de p, la dirección de p y el valor contenido en la
//        dirección almacenada en p, y el valor de r, la dirección de r y el valor contenido en la dirección almacenada en r.
printf("el valor de a: %d,\n la direccion de a %d, \nel valor de p %d,\n la direccion de p %d y \nel valor contenido en la direccion almacenada en p %d ",a, &a, p, &p, *p);
printf("\nel valor de r: %d,\n la direccion de r %d, \nel valor de p %d,\n la direccion de r %d y \nel valor contenido en la direccion almacenada en r %d ",r, &r, *r);



//    g. Emite un mensaje indicando si el valor del puntero p es igual al valor del puntero q
if( (p) == (q) ){
    printf("\nel valor del puntero p es igual al valor del puntero en q");
}else{
    printf("\nno es el mismo valor");
}
//    h. Ídem g indicando si el valor del puntero p es igual al valor del puntero r.
if( (p) == (r) ){
    printf("\nel valor del puntero p es igual al valor del puntero en q");
}else{
    printf("\nno es el mismo valor");
}
printf("\n\n");

//    i. Emite un mensaje indicando si el contenido de la posición de memoria apuntada
//        por p es igual al contenido de la posición de memoria apuntada por q

if( (*p) == (*r) ){
    printf("\nel valor del puntero p es igual al valor del puntero en q");
}else{
    printf("\nno es el mismo valor");
}
printf("\n\n");


    getchar();
    return 0;

    }
