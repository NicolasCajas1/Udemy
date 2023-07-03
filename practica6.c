#include <stdio.h>
#include <stdlib.h>
// Calcula el precio final de venta de coches de segunda mano 

int main() {
    int precio_base, kilometros;
    float consumo, precio_final;
    printf("Introduce el precio base del vehículo:\n");
    scanf("%d", &precio_base);
    printf("Introduce los kilómetros:\n");
    scanf("%d", &kilometros);
    printf("Introduce el consumo:\n");
    scanf("%f", &consumo);

    if (kilometros < 20000 && consumo <= 5) {
        precio_final = precio_base * 1.2;
    }
    else if (kilometros > 20000 && consumo <= 5) {
        precio_final = precio_base * 1.1;
    }
    else if (consumo > 5) {
        precio_final = precio_base * 1.05;
    }

    printf("El precio final del vehículo es: %.2f\n", precio_final);

    return 0;
}
