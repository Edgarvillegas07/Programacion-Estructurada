#include <stdio.h>

int main(){

int i;
int N = 4;
float temp1, temp2;
float temp[N];

temp[0]= 20.5;
temp[1]= 19.2;

printf("temperatura 0: %f\n",temp[0]);
printf("temperatura 1: %f\n",temp[1]);


for(i = 0; i < N; i++){

    printf("Temperatura%d: ", i+1);
    scanf("%f", &temp[i]);
}

for(i = 0; i < N; i++){
    printf("%f", temp[i]);
}


return 0;
}
