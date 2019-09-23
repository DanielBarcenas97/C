/*===================================================*
 * Programa para decidir los equipos de que formaran *
 * los prebes                                        *
 *===================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    struct prebe {
        const char * nombre;
        int numero;
    } lista_prebes[] = {
        { "Romero Andrade Vicente", 1 },
        { "Montecillo Sandoval Jose Alejandro", 2 },
        { "Balbuena Valencia Diana", 3 },
        { "Silva Sandoval Cecilia", 4 },
        { "Guevara López Eduardo", 5 },
        { "Garrido Mendoza Luis Alberto", 6 },
        { "Zepeda Valera Luis", 9 },
        { "Pastor Olivera Gerardo", 10 },
        { "Herrera Gabriel Alejandro", 12 },
        { "Pazaran Reyes Jordy Xavier", 13 },
        { "Francisco Pablo Rodrigo", 14 },
        { "Martínez Troncoso Julio Cesar", 21 },
        { "Rivera Esquivel Jeniffer", 22 },
        { "Higareda López Carlos Alberto", 24 }
    };

    int num_prebes = sizeof(lista_prebes) / sizeof(*lista_prebes);

    srand(time(NULL));

    puts("Los prebes son:");
    for (int i = 0; i < num_prebes; i++) {
        printf("Prebe %d: %s",
                lista_prebes[i].numero,
                lista_prebes[i].nombre);
    }
    puts("\n");

    // Con este algoritmo, si hay un nUmero impar de prebes
    // alquien se queda sin pareja.
    for (int i = 0; i < num_prebes / 2; i++) {
        int cambio1 = 2 * i + rand() % (num_prebes - 2 * i);
        int cambio2 = 2 * i + rand() % (num_prebes - 2 * i);

        while (cambio2 == cambio1)
            cambio2 = 2 * i + rand() % (num_prebes - 2 * i);

        struct prebe aux;

        // Intercambio 1
        aux = lista_prebes[2 * i];
        lista_prebes[2 * i] = lista_prebes[cambio1];
        lista_prebes[cambio1] = aux;

        // Intercambio 2
        aux = lista_prebes[2 * i + 1];
        lista_prebes[2 * i + 1] = lista_prebes[cambio2];
        lista_prebes[cambio2] = aux;
    }


    puts("Los equipos son:");
    for (int i = 0; i < num_prebes / 2; i++) {
        printf("Equipo %d:\n", i + 1);
        printf("\t%d. %s\n",
                lista_prebes[i].numero,
                lista_prebes[i].nombre);
        printf("\t%d. %s\n", 
                lista_prebes[i + 1].numero,
                lista_prebes[i + 1].nombre);
    }
    return 0;
}
