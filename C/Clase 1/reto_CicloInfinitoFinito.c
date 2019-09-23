/*============================*
 * ¿Por qué termina el ciclo? *
 *============================*/

#include <stdio.h>
#include <stdint.h>

int main(void) {
    int16_t n = 0;

    while (n >= 0) n++;

    printf("Nunca se deberia llegar a este punto\n");

    return 0;
}
