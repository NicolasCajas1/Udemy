#include <stdio.h>
#include <stdlib.h>
/* En un hotel, la información de las habitaciones se guarda en un vector bidimensional.
Cada posición del vector es a su vez otro vector en el que la primera posición indica el número de habitación
y las tres siguientes posiciones el precio de la habitación en temporada baja, media y alta. */

int main() {
    int informacion[3][4] = {{1, 120, 150, 220}, {2, 130, 160, 230}, {3, 100, 120, 200}};
    int suma_tem_baja = 0, suma_tem_media = 0, suma_tem_alta = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 1; j < 4; j++) {
            if (j == 1) {
                suma_tem_baja += informacion[i][j];
            }
            if (j == 2) {
                suma_tem_media += informacion[i][j];
            }
            if (j == 3) {
                suma_tem_alta += informacion[i][j];
            }
        }
    }

    float promedio_temp_baja = (float)suma_tem_baja / 3;
    float promedio_temp_media = (float)suma_tem_media / 3;
    float promedio_temp_alta = (float)suma_tem_alta / 3;

    printf("Promedio temporada baja: %.2f\nPromedio temporada media: %.2f\nPromedio temporada alta: %.2f\n", promedio_temp_baja, promedio_temp_media, promedio_temp_alta);

    return 0;
}
