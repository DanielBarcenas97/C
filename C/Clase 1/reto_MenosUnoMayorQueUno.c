/*========================================*
 * Encuentre el error lOgico y expliquelo *
 *========================================*/

#include <stdio.h>

int main(void) {
    unsigned int n = 0x1u;

    if ( -0x1u > n ) {
        printf("Menos uno es mayor a uno\n");
    } else {
        printf("Uno es mayor o igual que menos uno\n");
    }

    return 0;
}
