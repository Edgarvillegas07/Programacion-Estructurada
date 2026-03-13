#include <stdio.h>
#include <string.h>

int main(){



char alumno1[16] = "Antonio\n";
printf("%s", alumno1);



char alumno3[16] = "Edgar";
printf("%s", alumno3);
fgets(alumno3, sizeof(alumno3), stdin);

char jugadores[5][16];
    int i;
    int longitud;

    for(i = 0; i < 3; i++){
        printf("\nAnota los jugadores: \n");

        fgets(jugadores[i], sizeof(jugadores[i]), stdin);

        longitud = strlen(jugadores[i]);

        printf("La longitud de %s es de %d", jugadores[i], longitud);
    }


return 0;
}
