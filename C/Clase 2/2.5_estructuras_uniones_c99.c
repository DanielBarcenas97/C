/*===========================================*
 * DemostraciOn de las estructuras y uniones *
 *===========================================*/

#include <stdio.h>
#include <stdbool.h>

int main(void) {

    // DefiniciOn de una estructura
    struct NombreEstructura {
        int dato1;
        char dato2;
        _Bool dato3;
        // Se puede declarar variables al definir la estructura.
    } es3 = { 12, 'B', false }, es4;


    // struct NombreEstructura se usa en sustituciOn del tipo de dato
    struct NombreEstructura es1 = { .dato3 = true, .dato1 = 0, 'B' }; // InicializaciOn estAtica
    // Dentro de la inicializaciOn estAtica se pueden inicializar dAtos
    // en desorden usando la clave de acceso de cada uno.
    struct NombreEstructura es2;

    es2.dato1 = 101;
    es2.dato2 = 'Z';
    es2.dato3 = true;

    printf("Datos de es1: %d %c %d\n", es1.dato1, es1.dato2, es1.dato3);
    printf("Datos de es2: %d %c %d\n", es2.dato1, es2.dato2, es2.dato3);
    printf("Datos de es3: %d %c %d\n", es3.dato1, es3.dato2, es3.dato3);
    printf("Datos de es4 (sin inicializar): %d %c %d\n", es4.dato1, es4.dato2, es4.dato3);

    // DefiniciOn de la union
    union TipoUnion {
        int a;
        float b;
    } un4;

    union TipoUnion un1 = { 12 };         // Se inicializa el entero
    union TipoUnion un2 = { .b = 15.5 };  // Se inicializa el flotante
    union TipoUnion un3 = { .a = 10, .b = 102.0 }; // No tiene sentido inicializar dos de los campos, solo conserva uno y el otro se sobrreescribe

    puts("\nUniones:");
    printf("Union 1: %d %f\n", un1.a, un1.b);
    printf("Union 2: %d %f\n", un2.a, un2.b);
    printf("Union 3: %d %f\n", un3.a, un3.b);
    printf("Union 4 (sin inicializar): %d %f\n", un4.a, un4.b);

    // Uniones y estructuras anonimas
    struct { // La estructura no tiene nombre
        char a;
        char b;
    } anonima1, anonima2; // Solo se pueden declarar variables tras la definiciOn
                        // Por lo tanto los dAtos de tipo estructura
                        // anonima son Unicos en su tipo, no pueden
                        // pasarse a funciones y ser nombrados de alguna
                        // otra forma.

    union {
        int a;
        int b;
    } sin_nombre1, sin_nombre2;


    // Datos miembro anonimos
    struct EstructuraAnidada {
        char tipo;

        union { // Union anOnima
            int a;
            float b;
        }; // El dato es anOnimo
    };

    struct EstructuraAnidada an1 = { 'i', .a = 12 };
    struct EstructuraAnidada an2 = { 'f', .b = 113.25 };

    if ( an1.tipo == 'i' )
        printf("%d\n", an1.a);
    else
        printf("%f\n", an1.b);

    if ( an2.tipo == 'i' )
        printf("%d\n", an2.a);
    else
        printf("%f\n", an2.b);
    return 0;
}
