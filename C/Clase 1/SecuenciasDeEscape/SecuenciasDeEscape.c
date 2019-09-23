/*================================*
 * Secuencias de Escape en C      *
 * Codigo ASCII y UNICODE UTF-8   *
 * Digrafos Y Trigrafos en C      *
 *================================*/

/*Las Secuencias de Escape permiten representar la informacion de *
 *forma especial,con tabulaciones o estilos                       */

/*Una Secuencia de Escape siempre representa a un caracter del ASCII*/


/*Codigo ASCII(American Standard Code for Information Interchange)  *
 *El Codigo ASCII fue creado en 1963 por el ANSI(American National Standards Intitute)*
 *El Codigo ASCII Representa Numericamente los Caracteres y Simbolos*/

/*Los Caracteres del Codigo ASCII se pueden dividir en dos Clases*/

/*No Imprimibles (Primeros 32):Representan codigos de control del   * 
 *                             hardware o de un programa            *
 *Ejemplos:Escape, retorno de carro, cancelar, finalización, etc.   */

/*Imprimibles:En éste conjunto entrarían todas las letras del alfabetolatino,   * 
 *            números y símbolos de cualquier tipo, el “espacio” también está   *
 *            incluido. Es información que se puede mostrar, es decir, imprimir.*/

#include <stdio.h> //printf, puts
#include <stdlib>  //EXIT_SUCCESS, EXIT_FAILURE

 /*Para Escribir una secuencia de escape es con el caracter \ seguido de un caracter Especial */

 /*=============================================================*
  *                    Secuencias de Escape                     *
  *=============================================================*
  *|               Caracter              | Secuencia de Escape |*
  *=============================================================*
  *  Salto de Linea(Linefeed)            |           \n        |*
  *  Tabulador Horizontal (H tab         |           \t        |*
  *  Pitido(bell)                        |           \a        |*
  *  Retroceso(BackSpace)                |           \b        |*
  *  Retorno de Carro (Carriage Return)  |           \r        |*
  *  Comillas Dobles                     |           \"        |*
  *  Comillas Simples(Apostrofo)         |           \'        |*
  *  Barra Inversa (Backslash)           |           \\        |*
  *  Caracter Nulo                       |           \0        |*
  *  Caracter ASCII Octal                |           \ddd      |*
  *   Caracter ASCII Hexadecimal         |           \xdd      |*
  *=============================================================*/

int main(void){

	printf("Uno Dos Tres");
	//Obtenemos:Uno Dos Tres

	printf("\n Hola \n Adios \n");
	//Obtenemos:
	//Hola
	//Adios

	printf("Diez\tVeinte\tTreinta");
	//Obtenemos:
	//Diez   Veinte   Treinta

    /*Las  Secuencias  Comilla Doble(\"),  Comilla Simple(\') y Barra Inertida(\\)*
     *Sirven para mostrar Comilla Doble("),Comilla Simple(') y Barra Inertida(\\)*/

	printf( "7 de julio \"San Fermin\"" );
	//Obtenemos:
	//7 de julio "San Fermin"

	printf( "07\\Agosto\\2018" );
	//Obtenemos:
	//7\Agosto\2018

	/*Todos los caracteres en C son un Entero*/
	printf("%c \n",65); //A
	printf("%cbeto \n",65); //A
	printf("%c \n",97); //a
	printf("%cbeto \n",97); //a
	
   
    /*Mostrar la Letra Ñ y Tildes en C*/

	printf("%c de %crbol\n",160, 160); //á
	printf("%c de %clite\n",130, 130); //é
	printf("%c aparece en pr%cstino\n",161, 161); //í
	printf("%c aparece en cami%cn\n",162, 162); //ó
	printf("%c aparece en t%c\n",163, 163); //ú

   /* El resultado será similar a: *
	* á de árbol,                  *
	* é de élite,                  *
	* í aparece en prístino,       *
	* ó aparece en camión,         *
    * ú aparece en tú.             */

    /*En una secuencia de escape se pueden utilizar  *
     *hasta Tres caracteres en octal o               *
     *Cualquier número de caracteres en hexadecimal. *
     *Siempre que los valores estén dentro del rango *
     *Legal para el tipo char (de 0 a 0xff)          */

	/*Rango Octal:       |  \0 a \377  |  */
	/*Ejemplos
	 *\0  ->Caracter Nulo
     *\03 ->Ctr-C
     *\07 ->Bell
     *\013->Vertical TAB
     *\077->?   
     */


    /*Rango Hexadecimal  |  \x00  a \xFF  */
    /*Ejemplos
	 *\0  ->Caracter Nulo
     *\x3 ->Ctr-C
     *\x7 ->Bell
     *\xB ->Vertical TAB
     *\x3F->?   
     */

	/*Los números mayores que los indicados generan un error de compilación:         *
	 *Numeric constant too large. Por ejemplo, el octal \777 es mayor que el         *
	 *máximo permitido (\377), por lo que produciría un error. El primer carácter    *
	 *no octal o no hexadecimal que se encuentre en una secuencia octal o hexadecimal*
	 *respectivamente, señala el final de la secuencia de escape. Por ejemplo:       */
     //printf("\x072.1Un Sistema Operativo"); //MAL
	 printf("\x07" "2.1Un Sistema Operativo"); //Correcto


	 /*Digrafos y Trigrafos*/
	 /*Los Trigrafos son una característica muy extraña de C y totalmente inútil hoy en día.         *
	  *Resulta que cuando apareció C, no todos los teclados y los sistemas operativos soportaban     *
	  *los caracteres como #[]{}. Para poder escribir programas en C en estos sistemas se inventaron *
	  *los trigrafos, que son combinaciones de 3 caracteres que representan esos símbolos.           */

	 //Dígrafos y Trígrafos son la secuencia de 2 y 3 caracteres respectivamente.

     /* Dígrafo  | Equivalencia *         * Trigrafos    | Equivalencia  *
      *   <:     |      [       *         *     ??=      |      #        *
      *   :>     |      ]       *         *     ??/      |      \        *
      *   <%     |      {       *         *     ??(      |      [        *
      *   %>     |      }       *         *     ??)      |      ]        *
      *   %:     |      #       *         *     ??<      |      {        *
                                          *     ??>      |      }        *
                                          *     ??-      |      ~        *
                                          *     ??'      |      ^        */
	 /*A continuación pongo un Hola mundo utilizando trigrafos para codificar algunos caracteres:*

	 ??=include <stdio.h>
     int main(int argc, char argv??(??))
     ??<
     printf("Hola mundo!!??/n");
     ??>

    GCC no compila directamente este programa, hemos de pasarle 
    -trigraphs como argumento para que compile correctamente.
      
    gcc -trigraphs holamundotrigraph.c

    */






	 //Para Agregar Caracteres Unicode 

	 /*Para imprimir un caracter Unicode no es necesario que uses printf. 
	   La secuencia de escape \u  es interpretada  por  el  compilador C, 
	   no por la librería estandar, al momento de llamar printf, al igual 
	   que la secuencia \n por ejemplo. 

	   Daría lo mismo que imprimas puts("   \u0305").

	   Ahora bien, cuando escribimos \u0305 le estamos diciendo al compilador C: 
	   aloja en esta cadena de caracters un byte para el espacio inicial y despues 
	   el codepoint Unicode número 0x0305 (hexadecimal). 

	   Cómo se almacena esto en el string (en tiempo de compilación, al convertir 
	   de código fuente a ejecutable u objeto binario), depende de los seteos (locale) 
	   de tu sistema. Si estás usando UTF-8, serán -en este caso- dos bytes.

	   Al momento de imprimirlo (en consola o a un archivo) esos bytes se emitirán tal cual. 
	   Para que tus ojos lo vean como el caracter que Unicode dice ser, la consola o el visor 
	   de archivos deben estar de acuerdo con el compilador.

	   Unicode tiene mas de 120000 caracteres, uno no puede esperar ver correctamente todos*/

	 //Ejemplos de Caracteres en Unicode:
	 puts("   \u0100"); // Ā
     puts("   \u0201"); // ȁ
     puts("   \u0302"); // ̂
     puts("   \u0403"); // Ѓ
     puts("   \u0504"); // Ԅ
     puts("   \u0625"); // ̅
     puts("   \u0706"); // ܆
     puts("   \u0807"); // ई
     puts("   \u0908"); // ဉ
     puts("   \u1009"); // ̅
     puts("   \u1110"); // ᄐ
     puts("   \u2011"); // ‑
     puts("   \u3012"); // 〒
     puts("   \u4100"); // 䄀
	   

	return EXIT_SUCCESS;
}








