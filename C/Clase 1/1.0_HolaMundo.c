/*=================*
 * Hola mundo en C *
 *=================*/

#include <stdio.h>      // puts, getchar
#include <stdlib.h>     // EXIT_SUCCESS (macro con valor 0)

// La función main es el punto de entrada del programa,
// y por tanto es la que cumple la labor de interfáz entre
// el proceso que lo mandó a llamar (generalmente la consola)
// y el programa en si.
//
// La posible comunicación entre consola y programa consiste en:
//      Mensajes que le mandó el proceso padre:
//          - contador_argumentos(normalmente llamado argc): Un entero
//              que cuente el número de cadenas que fueron mandadas al main.
//          - vector_argumentos(normalmente llamado argv): Un arreglo
//              de cadenas que almacenara los argumentos.
//      Mensaje que retorna el programa al proceso padre:
//          - Un entero que indica el estado de finalizaciOn del programa.
//            (por convención, 0 significa éxito y cualquier otro número
//            significa fallo).
int main(int contador_argumentos, char * vector_argumentos[]) {
    puts("¡Hola mundo!"); // Imprime el mensaje.

    getchar(); // Espera a que se presione enter antes de salír.
    return EXIT_SUCCESS;
}
