#include <stdio.h>

void f_doble(int nu){
    nu = nu * 2;
    printf("El doble es: %d\n", nu);
}

void f_triple(int *nu){
    *nu = (*nu) * 3;
    printf("El triple es: %d\n", *nu);
}

int f_resta(int a){
a = a-2;
if(a <=0)
    return 0;
else
    f_resta(a);
}

int main(){

    int a;

    printf("Dame un num. del 1 al 100: ");
    scanf("%d", &a);


    f_doble(a);


    printf("Valor de a despues de f_doble: %d\n", a);


    f_triple(&a);


    printf("Valor de a: %d\n", a);

    printf("\n");

    /////////////////////////////////////////

    int x = 5;
    int *p;

    p = &x;

    printf("x = %d\n", x);
    printf("direccion de x = %p\n", p);
    printf("valor apuntado por p = %d\n", *p);

    //////////////////////////////////////////////////

    int *v;
    v = (int*)malloc(5*sizeof(int));

    return 0;
}
