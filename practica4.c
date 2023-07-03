#include <stdio.h>
#include <stdlib.h>
// Conversión de euros a pesetas
int main() {
    float euros;
    printf("Introduce los euros que quieres convertir:\n");
    scanf("%f", &euros);

    printf("%.2f euros equivalen a %.2f pesetas\n", euros, euros * 166.386);

    return 0;
}
