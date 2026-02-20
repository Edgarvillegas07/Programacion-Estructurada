#include <stdio.h>

int main(){

int n, i;
float calificacion, suma = 0, promedio;

printf("Cuantas calificaciones se ingresaran? \n");
scanf("%d", &n);


for(int i = 1; i <= n; i++){

do{
printf("ingresa las calificaciones: %d  " , i);
scanf("%f", &calificacion);

if(calificacion < 0 || calificacion > 100){
    printf("El numero que ingresaste es incorrecto \n");
}


}while(calificacion < 0 || calificacion > 100);
suma += calificacion;
}

promedio = suma / n;

printf(" la suma es: %2.f \n", suma);
printf(" el promedio es: %2.f \n", promedio);



return 0;
}

