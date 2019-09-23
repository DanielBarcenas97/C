/*==============================*
 * Explique el siguiente código *
 *==============================*/

#include <stdio.h>

#define p(a, b) a ## b

int main(void)
{
    p(pri,ntf) ("Hola mundo\n");

    return 0;
}
