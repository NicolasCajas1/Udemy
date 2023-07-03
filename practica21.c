#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*‘Se desea reatzar un progama que aimacene a informacitn de un motor de combust
\rtema y posterormente muesire ia cindrada de dicho maior en CV, La intormaciin dat motor
se aracerart en una estructura con los siguientes miembros y tpos de datos:

ent ificador el motor: valor mundinco que enti ef meter de oma Orica
Clindre: earuchea de datos anid

Ininere de cilindres: imero ertero que ipcca @! ple de clndros Get motor
(CLLindreda:nimero reat que se calcutarh en et programs,

‘A bu vez, Cinco cord una esructura anidada que conte do los siguientes miembros:

© Dldmetre:nimero reat (en mimeo)
© Carrera: riser real (en mieten)

La intormacén dat Gino ve siracenart en miimetros. B programe pede los datos del
motor af usa y calcu la Ckndrada, que simecenard en ls misma esiucura de dutos,
sen ta saps tomas:

 

Donde W representa ef rime de cindros, ¢ representa la camera del clindro (en
cortimetos). Det ddmetro det cindko (en certimeros) y Ml tere su valor detinito en ta
\orera mathe como ALPE. (CUOADO CON LAS UNDADES DE MEDOA

 

‘Fraimerte, so mostarin todos los dalos itoducidos por ef usuario y in clndaca det motor.*/
struct cilindro {
    float diametro;
    float carrera;
};

struct motor {
    int identificador;
    struct cilindro cilindro1;
    int num_cilindros;
    float cilindrada;
};

int main() {
    struct motor motor1;

    printf("Introduce el identificador: ");
    scanf("%d", &motor1.identificador);
    printf("Introduce el diametro del cilindro: ");
    scanf("%f", &motor1.cilindro1.diametro);
    printf("Introduce la carrera del cilindro: ");
    scanf("%f", &motor1.cilindro1.carrera);
    printf("Introduce el numero de cilindros: ");
    scanf("%d", &motor1.num_cilindros);

    motor1.cilindrada = (motor1.num_cilindros * (motor1.cilindro1.carrera / 10) * M_PI * pow(motor1.cilindro1.diametro / 10, 2)) / 4;

    printf("Identificador: %d\n", motor1.identificador);
    printf("Diametro: %.2f\n", motor1.cilindro1.diametro);
    printf("Carrera: %.2f\n", motor1.cilindro1.carrera);
    printf("Numero de cilindros: %d\n", motor1.num_cilindros);
    printf("Cilindrada: %.2f\n", motor1.cilindrada);

    return 0;
}
