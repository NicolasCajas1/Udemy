#include <stdio.h>
#include <stdlib.h>
/*1 Escribir un programa que lea un fichero llamado
numeros.txt que contiene una lista de numeros
(uno en cada fila) y devuelva la suma de dichos numeros.*/
int main()
{
    FILE *f;
    f = fopen("numero.txt","r");
    int suma,numero;

    while (feof(f)==0){
        fscanf(f,"%d",&numero);
        suma = suma + numero;
    }
    printf("la suma de todos los numeros del fichero es:%d\n",suma);

    fclose(f);
}
