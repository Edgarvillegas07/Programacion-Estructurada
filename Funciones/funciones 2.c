#include <stdio.h>

void capturar(int m[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &m[i][j]);
        }
    }
}

void mostrar(int m[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int diagonal(int m[3][3]){
    int suma = 0;

    for(int i=0; i<3; i++){
        suma = suma + m[i][i];
    }

    return suma;
}


void archivo(int m[3][3]){
FILE *f;
f = fopen("tablero.txt","a");
 for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            fprintf(f,"%d ", m[i][j]);
        }
        fprintf(f,"\n");
    }
    fclose(f);

}

int main(){
    int matriz[3][3];

    capturar(matriz);
    mostrar(matriz);

    int resultado = diagonal(matriz);
    printf("Suma diagonal: %d\n", resultado);


    archivo(matriz);

    return 0;
}
