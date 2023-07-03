#include <stdio.h>
#include <stdlib.h>
/*escribir un programa que pida 4 cadenas por
teclado y las muestre por la salida separadas
por un “-"*/


int main(){
    char cadena1[50],cadena2[20],cadena3[50],cadena4[50];
    printf("introduce la cadena 1\n");
    gets(cadena1);
    printf("introduce la cadena 2\n");
    gets(cadena2);
    printf("introduce la cadena 3\n");
    gets(cadena3);
    printf("introduce la cadena 4\n");
    gets(cadena4);

    printf("%s-%s-%s-%s",cadena1,cadena2,cadena3,cadena4);
}