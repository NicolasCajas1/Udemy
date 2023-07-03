#include <stdio.h>
#include <stdlib.h>
/*
© Declarar un registro llamado producto con los siguientes campos:
= Codigo, de tipo entero.
= Descripcion, de tipo vector de caracteres.
= Precio, de tipo real.

© Definir un puntero de tipo producto y luego reservar espacio en
memoria para almacenar una variable de tipo producto.

© Inicializar los campos del registro creado dinamicamente.

© Imprimir los campos del registro.

© Liberar el espacio dinamico reservado.*/


struct producto{
    int codigo;
    char descrpicion[50];
    float precio;
};


int main(){
    struct producto *prod;
        
    prod = malloc(sizeof(struct producto));

    printf("introduce el codigo\n");
    scanf("%d",&prod->codigo);
    printf("Introduce la descripcio\n");
    scanf("%s",&prod->descrpicion);
    printf("introduce el precio\n");
    scanf("%d",&prod->precio);

    printf("codigo de articulo: %d\n", prod->codigo);
    printf("descripcion: %s\n", prod->descrpicion);
    printf("Preci: %f\n",prod->precio);

    free(prod);
    prod = NULL;
}