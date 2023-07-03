#include <stdio.h>
#include <stdlib.h>
// Pide el número de día al usuario y muestra el día de la semana al que equivale

int main() {
   int dia;
   printf("Introduce un número en el rango 1-7: ");
   scanf("%d", &dia);

   switch (dia) {
      case 1:
         printf("Lunes\n");
         break;
      case 2:
         printf("Martes\n");
         break;
      case 3:
         printf("Miércoles\n");
         break;
      case 4:
         printf("Jueves\n");
         break;
      case 5:
         printf("Viernes\n");
         break;
      case 6:
         printf("Sábado\n");
         break;
      case 7:
         printf("Domingo\n");
         break;
      default:
         printf("Error. Día no válido\n");
         break;
   }

   return 0;
}
