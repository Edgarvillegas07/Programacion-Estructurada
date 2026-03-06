#include <stdio.h>

int main(){

 int M = 3;
    int N = 3;

    int tablero[3][3] = {0};
    int fila, columna;

    // colocar 2 botes
    for(int i = 0; i < 2; i++){
        printf("Coloca el bote %d\n", i+1);

        printf("Fila (0-2): ");
        scanf("%d", &fila);

        printf("Columna (0-2): ");
        scanf("%d", &columna);

        tablero[fila][columna] = 1;
    }

    printf("\nTablero:\n");

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("%d ", tablero[i][j]);
        }
        printf("\n");
    }





return 0;
}
