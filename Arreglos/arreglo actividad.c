#include <stdio.h>
#include <string.h>

int main(){


char nombre[20];
int tablero[5][5];
FILE *archivo;
archivo = fopen("tablero.txt", "w");

for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
    tablero[i][j] = '~';
    }
}

tablero[1][2] = 'B';
tablero[3][4] = 'x';
tablero[2][1] = 'O';

for(int i = 0; i < 5; i++){
    for( int j = 0; j < 5; j++){
        printf("%c", tablero[i][j]);
    }
    printf("\n");
}


fprintf(archivo,"Edgar");
 fprintf(archivo, "\n");


for(int i = 0; i < 5; i++){
    for( int j = 0; j < 5; j++){

        fprintf(archivo,"%c", tablero[i][j]);

    }

    fprintf(archivo, "\n");
}
fprintf(archivo, "Edgar\n");
printf("Escribe tu nombre: ");
scanf("%s", &nombre);
fprintf(archivo,"%s",nombre);

fclose(archivo);

archivo2 = fopen("nombre.txt", "r");

fprintf(archivo2, "%s",nombre);

fclose(archivo2);


return 0;
}
