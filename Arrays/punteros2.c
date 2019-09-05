#include <stdio.h>

int main(){

////    int a, b =3;
////    float c;
////    char d = 'm';
////    a = 6;
////    c = 2.5;
////    float x = 3.75;
////    float *r;
////    r = &x;
////
////
////    printf("x contiene: %f y esta en: %d", *r, r);
//////    printf("\na ocupa %d bytes y contiene %d",sizeof(int),b);
//////    printf("\n b ocupa %d bytes",sizeof(b));
//////    printf("\nc contiene %f y esta en: %d",c,&c);
//////    printf("\nc ocupa %d bytes",sizeof(float));
//////    printf("\nd ocupa %d bytes",sizeof(char));
//////    printf("\ndoble ocupa %d bytes",sizeof(double));
////
////    int a, b;
////    int *pa; //el contenido de pa = 5
////    a = 5;
////    pa = &a; //direccion de a
////    b = *pa; // b= 5
////
////    int i, j,*p;
////    p=&i; //direccion de i
////    *p=21; //i = 21
////    p=&j; //p tiene la direccion j
////
////    *p=1; //j= 1
//
////    4. Declara a, b y c variables enteras, y p, q y r variables puntero a entero.
//    int a, b, c;
//    int *p, *q, *r;
//
////    a. Declara m, n variables de tipo float y s y t variables puntero a float.
//    float m, n;
//    float *s,*t;
//
////    b. Asigna a "p" la dirección de a y a q la dirección de b.
//    p = &a;
//    q = &b;
//
////    c. Asigna a b el valor 40 usando el puntero q. Mostrar el valor de b, la dirección de b , el valor de q,
////        la dirección de q y el valor contenido en la dirección almacenada en q.
//    *q=40;
//    printf("%d %d %d %d %d",b,&b,q,&q,*q);
//
////    d. Ingresar desde teclado el valor de a usando su dirección almacenada. Mostrar el valor de a, la dirección de a,
////        el valor de p, la dirección de p y el valor contenido en la dirección almacenada en p.
//printf("\ningrese el valor de a: ");
//scanf("%d",p);
//printf("el valor de a: %d,\n la direccion de a %d, \nel valor de p %d,\n la direccion de p %d y \nel valor contenido en la direccion almacenada en p %d ",a, &a, p, &p, *p),
//printf("\n\n");
//
////    e. Asigna a r la dirección de a.
//    r = &a;
//
////    f. Asigna a la posición de memoria contenida en el puntero r el valor 200.
//    *r = 200;
////        Mostrar el valor de a, la dirección de a , el valor de p, la dirección de p y el valor contenido en la
////        dirección almacenada en p, y el valor de r, la dirección de r y el valor contenido en la dirección almacenada en r.
//printf("el valor de a: %d,\n la direccion de a %d, \nel valor de p %d,\n la direccion de p %d y \nel valor contenido en la direccion almacenada en p %d ",a, &a, p, &p, *p);
//printf("\nel valor de r: %d,\n la direccion de r %d, \nel valor de p %d,\n la direccion de r %d y \nel valor contenido en la direccion almacenada en r %d ",r, &r, *r);
//
//
//
////    g. Emite un mensaje indicando si el valor del puntero p es igual al valor del puntero q
//if( (p) == (q) ){
//    printf("\nel valor del puntero p es igual al valor del puntero en q");
//}else{
//    printf("\nno es el mismo valor");
//}
////    h. Ídem g indicando si el valor del puntero p es igual al valor del puntero r.
//if( (p) == (r) ){
//    printf("\nel valor del puntero p es igual al valor del puntero en q");
//}else{
//    printf("\nno es el mismo valor");
//}
//printf("\n\n");
//
////    i. Emite un mensaje indicando si el contenido de la posición de memoria apuntada
////        por p es igual al contenido de la posición de memoria apuntada por q
//
//if( (*p) == (*r) ){
//    printf("\nel valor del puntero p es igual al valor del puntero en q");
//}else{
//    printf("\nno es el mismo valor");
//}
//printf("\n\n");



//7. Un programa en C contiene las siguientes sentencias:
//float a = 0.001, b = 0.003;
//float c, *pa, *pb;
//pa = &a;
//*pa = 2 * a;
//pb = &b;
// c = 3 * (*pb - *pa);
//
//    printf("\n%f",a);
//
//    printf("\n%f",b);
//Responda:
//a) ¿Qué valor tiene a al finalizar el programa? 0.002

//b) ¿Qué valor tiene b al finalizar el programa? 0.003
//c) ¿Qué valor tiene c al finalizar el programa? 3*0.003-0.002

//d) ¿Qué valor tiene (*pa) al finalizar el programa? 0.002

//e) ¿Qué valor tiene (*pb) al finalizar el programa? 0.003

//8. El siguiente código contiene un error, cuál es?:
//
//    int x = 5; float y = 5;
//    int *xPtr = NULL;
//     xPtr = &y;
//     printf ("%d", *xPtr) ;
//      return 0;
//
//
//
//    9. Cuál es la salida del siguiente programa?
////    Una vez realizada su ejecución, comentar qué tarea realiza cada instrucción o línea del programa.
//    int a, b, *p, *q,*r;
//    char c, d, *m,*n;
//    a=5;
//    b=7;
//    q=&a;
//    p=q;
//    *p=b;
//    printf("q vale: %d\n\n\n", *q);
//    r=&b; *r=*q;
//    printf("a=%d, b=%d, *p=%d, *q=%d, *r=%d\n\n\n", a, b,*p,*q,*r);
//    c='A';
//    d='B';
//    m=&c;
//    n=&d;
//    *m=*n;
//    if (m==n) printf("m y n apuntan a la misma dirección\n\n\n");
// else printf("m y n apuntan a direcciones distintas\n\n\n");
// printf ("*m=%c\n\n\n", *m);
//

//    int *p;
//    int a=1, b=2;
//    int **s;
//    p=&a;
//    b=*p+1;
//    s=&p;
//    printf("p=%d, *p=%d, &p=%d\n", p,*p, &p);
//    printf("s=%d, *s=%d, &s=%d (puntero a puntero)**s=%d\n", s,*s, &s, **s);
//    *s=&b;
//    printf("Se ejecutó *s=&b\n y ahora…\n");


//int a,b,c;
//int *p1,*p2;
//p1 = &a; //direccion de a
//*p1 = 1; //a=1
//p2 = &b; //direccion de b
//*p2 = 2; //b=2
//p1 = p2;  // No puedo asignar direcciones
//*p1 = 0;
//p2 = &c;
//*p2 = 3;

//    int num, n;
//    int *dir_n;
//    num=22;
//    n=7;
//    dir_n=&n;
//    printf("La variable num vale: %d\n", num);
//    printf("La dirección de memoria donde esta almacenada la variable num es: %d\n", &num);
//    printf("La dirección de memoria almacenada en dir_n es: %d\n", dir_n);
//    printf("El valor de la variable apuntada por dir_n es: %d\n",*dir_n);

//
//    int u = 3, v;
//    int *pu;
//    int *pv;
//    pu = &u; // pu direccion de u
//    v = *pu; //v = 3
//    pv = &v; //pv direccion de v
//    printf("\nu=%d &u=%X pu=%X *pu = %d", u, &u, pu, *pu);
//    // 3, direccion de u, direccion de un, 3
//    printf("\nv=%d &v=%X pv=%X *pv =%d", v, &v, pv, *pv);

    int *pta, *ptb;
    int a, b;

    pta = *a; //no es direccion
    ptb = &pta; //direccion de pta
    pta = 8; // ? la direccion? NEH
    ptb = ptb + 3; //direccion mas sarasa? NO LO CREO
    ptb = &NULL;  // DIRECCION NULA?

    b = 8;
    ptb = b;
    ptb = a + 10;
    printf(“%d”, pta + ptb);
    int *pta,*ptb, a, b;

    getchar();
    return 0;

    }
