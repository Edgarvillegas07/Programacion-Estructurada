#include <stdio.h>

int main(){


float temp1, temp2;
float temp[24];
int dummy;

printf("Direccion de memoria de 2 flotantes: &temp1: %i,\n&temp2 %i!\n", &temp1, &temp2);
printf("Direccion de temp[24]: %i,\n", temp);
printf("Direccion de &temp[23]: %i,\n", &temp[23]);
printf("Direccion de &dummy[24]: %i,\n", &dummy);

  
return 0;
}

