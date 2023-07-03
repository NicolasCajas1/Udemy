#include <stdio.h>
#include <stdlib.h>

int main() {
    char cl, c2, c3;
    printf("Introduce 3 caracteres:\n");
    scanf(" %c %c %c", &cl, &c2, &c3);

    printf("%c-%c-%c\n", cl, c2, c3);

    return 0;
}
