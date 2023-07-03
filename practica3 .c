#include <stdio.h>
#include <stdlib.h>
//areas

int main(){
   float base, altura;
   printf("introducir la base de rectangulo ");
   scanf("%f",&base);
   printf("introduzca la altura del recatngulo ");
   scanf("%f",&altura);
   float area = base * altura;
   printf("El area del rectangulo de base %.2f y altura en %.2f es: %.2f",base,altura,area);
}

