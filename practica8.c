#include <stdio.h>
#include <stdlib.h>
// muestra los multiplos de 3 desde el 1 al 100 
int main() {
    for (int i = 1; i < 100; i++){
        if (i%3==0){
            printf("%d\n",i);
        }
    }
    

}
