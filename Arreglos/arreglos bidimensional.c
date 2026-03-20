#include <stdio.h>


int main(){


char nombre[4][20];

    int i;

    for(i = 0; i < 4; i++){

        fgets(nombre[i], sizeof(nombre[i]), stdin);
    }


printf("%d\n", &nombre[0]);
printf("%d\n", &nombre[1]);
printf("%d\n", &nombre[2]);


printf("\n//////////////\n");


int numeros[5];

for(int i = 0; i < 5; i++){
    scanf("%d", &numeros[i]);
}
for(int i = 0; i < 5; i++){
    printf("%d\n", &numeros[i]);
}






   char arregloc[5];
   printf("%d\n", &arregloc);
   printf("%d\n", &arregloc[0]);
   printf("%d\n", &arregloc[1]);
   printf("%d\n", &arregloc[2]);


return 0;
}
