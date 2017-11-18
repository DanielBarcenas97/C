#include <stdio.h>
#include <setjmp.h>

static jmp_buf buf;

void second(void) {
    printf("second\n");         // Impresiones
    longjmp(buf,1);             // salta de nuevo a donde fue llamado setjmp
}

void first(void) {
    second();
    printf("first\n");          // No se Imprime
}

int main() { 
    if ( ! setjmp(buf) ) {
        first();                // Cuando se ejecuta, devuelve 0 setjmp
    } else {                    // cuando salta longjmp, setjmp devuelve 1
        printf("main\n");       // Impresiones
    }

    return 0;
}