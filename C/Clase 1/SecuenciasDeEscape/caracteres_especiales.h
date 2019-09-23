/*
 * (C) Copyright 2017 MartInez Ortiz Saul UNAM
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*************************************************************/
/* Biblioteca : caracteres_espaciales.                       */
/* DescripciOn: Define un conjunto de macros que             */
/*              representan los carActeres especiales de     */
/*              uso frecuente en el espaniol. Principalmente */
/*              las vocales acentuadas y tambiEn algunos     */
/*              sImbolos de dibujo. La definiciOn            */
/*              se hace tomando en cuenta el sistema.        */
/*************************************************************/

#ifndef _CARACTERES_ESPECIALES_H
#define _CARACTERES_ESPECIALES_H

/*=============================*
 * CAracteres para el espaniol *
 *=============================*/

#ifdef __cplusplus
extern "C" { // Exportar a cpp
#endif

#ifdef _WIN32 // 1

    /*-* Comando para limpiar la pantalla *-*/
    #define CLEAR "cls"

    /*-* Simbolo de diagonal para las rutas *-*/
    #define DIAG "\\"

    /*-* Letras minusculas acentuadas *-*/
    #define A "\xA0"
    #define E "\x82"
    #define I "\xA1"
    #define O "\xA2"
    #define U "\xA3"
    #define N "\xA4"

    /*-* Letras mayusculas acentuadas *-*/
    #define MA "\xB5"
    #define ME "\x90"
    #define MI "\xD6"
    #define MO "\xE0"
    #define MU "\xE9"
    #define MN "\xA5"

    /*-* Signo de pregunta inicial *-*/
    #define Q  "\xA8"

    /*-* Signo de exclamaciOn inicial *-*/
    #define X  "\xAD"

#else // 1

    /*-* Comando para limpiar la pantalla *-*/
    #define CLEAR "clear"

    /*-* Simbolo de diagonal para las rutas *-*/
    #define DIAG "/"

    /*-* Letras minusculas *-*/
    #define A "\u00E1"
    #define E "\u00E9"
    #define I "\u00ED"
    #define O "\u00F3"
    #define U "\u00FA"
    #define N "\u00F1"

    /*-* Letras mayusculas *-*/
    #define MA "\u00C1"
    #define ME "\u00C9"
    #define MI "\u00CD"
    #define MO "\u00D3"
    #define MU "\u00DA"
    #define MN "\u00D1"

    /*-* Signo de pregunta abierto *-*/
    #define Q  "\u00BF"

    /*-* Signo de exclamaciOn inicial *-*/
    #define X  "\u00A1"

#endif // Fin _WIN32 1

/*========================*
 * CarActeres para dibujo *
 *========================*/

/** 
 * Dibujo de cajas:
 *
 *      0    8     4          1
 *      +----------+----------+     0 - Esquina superior izquierda
 *      |          |          |     1 - Esquina superior derecha
 *      |          |          |     2 - Esquina inferior derecha
 *      |          |          |9    3 - Esquina inferior izquierda
 *      |          |          |     4 - Truncamiento superior
 *     7|----------+10--------|5    5 - Truncamiento derecho
 *      |          |          |     6 - Truncamiento inferior
 *      |          |          |     7 - Truncamiento izquierdo
 *      |          |          |     8 - Barra horizontal
 *      |          |          |     9 - Barra vertical
 *      +---------------------+     10- Centro
 *      3          6          2
 */

#define ESQUINA_SUPERIOR_IZQUIERDA  0
#define ESI                         0

#define ESQUINA_SUPERIOR_DERECHA    1
#define ESD                         1

#define ESQUINA_INFERIOR_DERECHA    2
#define EID                         2

#define ESQUINA_INFERIOR_IZQUIERDA  3
#define EII                         3

#define TRUNCAMIENTO_SUPERIOR       4
#define TSU                         4

#define TRUNCAMIENTO_DERECHO        5
#define TDE                         5

#define TRUNCAMIENTO_INFERIOR       6
#define TIN                         6

#define TRUNCAMIENTO_IZQUIERDO      7
#define TIZ                         7

#define BARRA_HORIZONTAL            8
#define BHZ                         8

#define BARRA_VERTICAL              9
#define BVE                         9

#define CENTRO                      10
#define CEN                         10

#ifdef _WIN32 // 2

/*-* Caja con lineas simples *-*/
const char * CAJA1[11] = {
    "\xDA", "\xBF", "\xD9", "\xC0",
    "\xC2", "\xB4", "\xC1", "\xC3",
    "\xC4", "\xB3", "\xC5"
};

/*-* Caja con lineas dobles *-*/
const char * CAJA2[11] = {
    "\xC9", "\xBB", "\xBC", "\xC8",
    "\xCB", "\xB9", "\xCA", "\xCC",
    "\xCD", "\xBA", "\xCE"
};

// La caja con esquinas redondeadas no existe en windows
// simplemente se pusieron simbolos de suma y resta en su lugar
const char * CAJA3[11] = {
    "+", "+", "+", "+",
    "+", "+", "+", "+",
    "-", "|", "+"
};

#else // 2

/*-* Caja con lineas simples *-*/
const char * CAJA1[11] = {
    "\u250C", "\u2510", "\u2518", "\u2514",
    "\u252C", "\u2524", "\u2534", "\u251C",
    "\u2500", "\u2502", "\u253C"
};

/*-* Caja con lineas dobles *-*/
const char * CAJA2[11] = {
    "\u2554", "\u2557", "\u255D", "\u255A",
    "\u2566", "\u2563", "\u2569", "\u2560",
    "\u2550", "\u2551", "\u256C"
};

/*-* Caja con esquinas redondeadas *-*/
const char * CAJA3[11] = {
    "\u256D", "\u256E", "\u256F", "\u2570",
    "\u252C", "\u2524", "\u2534", "\u251C",
    "\u2500", "\u2502", "\u253C"
};

#endif // Fin _WIN32 2

/*-* CarActeres de bloque *-*/

#ifdef _WIN32 // 3

#define BDB "\xB0"        // Bloque Densidad Baja
#define BDM "\xB1"        // Bloque Densidad Media
#define BDA "\xB2"        // Bloque Densidad Alta

#else // 3

#define BDB "\u2591"      // Bloque Densidad Baja
#define BDM "\u2592"      // Bloque Densidad Media
#define BDA "\u2593"      // Bloque Densidad Alta

#endif // Fin _WIN32 3


/*-* Otros carActeres de dibujo  *-*/

#ifdef _WIN32 // 4

#define CARITA1                 "\x01"
#define CARITA2                 "\x02"

#define EQUIS                   "\x9E"
#define CIRCULO_TRANSPARENTE    "\x4F"
#define CIRCULO_SOLIDO          "\x9D"
#define CUADRO_TRANSPARENTE     "\xB0"
#define CUADRO_SOLIDO           "\xDC"

// En windows solo hay un corazOn aceptado por la terminal
// por lo que todos son el mismo
#define CORAZON1                "\x03"
#define CORAZON2                "\x03"
#define CORAZON3                "\x03"
#define CORAZON4                "\x03"
#define CORAZON5                "\x03"
#define CORAZON6                "\x03"

#define POKER1                  "\x03"
#define POKER2                  "\x04"
#define POKER3                  "\x05"
#define POKER4                  "\x06"

#define NOTA_MUSICAL1           "\x0D"
#define NOTA_MUSICAL2           "\x0E"

#define SOL                     "\x0F"

#define CRUZ1                   "\xC5"
#define CRUZ2                   "\xC5"
#define CRUZ3                   "\xC5"
#define CRUZ4                   "\xC5"
#define CRUZ5                   "\xC5"
#define CRUZ6                   "\xC5"
#define CRUZ7                   "\xC5"
#define CRUZ8                   "\xC5"
#define CRUZ9                   "\xC5"
#define CRUZ10                  "\xC5"
#define CRUZ11                  "\xC5"

#define FLECHA_IZQUIERDA        "\x1B"
#define FLECHA_DERECHA          "\x1A"
#define FLECHA_ARRIBA           "\x18"
#define FLECHA_ABAJO            "\x19"

#define PUNTA_IZQUIERDA         "\x11"
#define PUNTA_DERECHA           "\x10"
#define PUNTA_ARRIBA            "\x1E"
#define PUNTA_ABAJO             "\x1F"

/*-* SImbolos de gEnero *-*/
#define FEMENINO                "\x0C"
#define MASCULINO               "\x0B"

// Estos sImbolos no estAn es ascii
// por lo que se puso algo que se pareciera
#define SIMBOLO_PAZ             "(/|\\)"
#define AMOR_Y_PAZ              "\x59"

#define ESTRELLA1               "\x2A"
#define ESTRELLA2               "\x2A"
#define ESTRELLA3               "\x2A"
#define ESTRELLA4               "\x2A"
#define ESTRELLA5               "\x2A"
#define ESTRELLA6               "\x2A"
#define ESTRELLA7               "\x2A"
#define ESTRELLA8               "\x2A"
#define ESTRELLA9               "\x2A"
#define ESTRELLA10              "\x2A"
#define ESTRELLA11              "\x2A"
#define ESTRELLA12              "\x2A"
#define ESTRELLA13              "\x2A"
#define ESTRELLA14              "\x2A"
#define ESTRELLA15              "\x2A"
#define ESTRELLA16              "\x2A"
#define ESTRELLA17              "\x2A"
#define ESTRELLA18              "\x2A"

#define LUNA1                   "\x28"
#define LUNA2                   "\x29"

/*-* SImbolos matemAticos *-*/
#define RAIZ                    "\\/"
#define INFINITO                "oo"

#define INTEGRAL_ARRIBA         "\xF4"
#define INTEGRAL_ABAJO          "\xF5"

#define MAS_MENOS               "\xF1"
#define MENOR_IGUAL             "<="
#define MAYOR_IGUAL             ">="
#define APROXIMADO              "~~"
#define EXACTO                  "=="

#define UNION                   "U"
#define INTERSECCION            " _\n| |"

#define ALFA                    "a"
#define BETA                    "b"
#define GAMMA                   "y"
#define PI                      "n"
#define SIGMA_MINUS             "\xE4"
#define SIGMA                   "\xE5"
#define MIU                     "\xE6"
#define TAU                     "\xE7"
#define PHI                     "\xE8"
#define THETA                   "\xE9"
#define OMEGA                   "\xEA"
#define DELTA                   "\xEB"
#define PHI_MINUS               "\xEC"
#define EPSILON                 "\xED"

#else // 4

#define CARITA1                 "\u263A"
#define CARITA2                 "\u263B"

#define EQUIS                   "\u00D7"
#define CIRCULO_TRANSPARENTE    "\u25CB"
#define CIRCULO_SOLIDO          "\u25CF"
#define CUADRO_TRANSPARENTE     "\u25A1"
#define CUADRO_SOLIDO           "\u25A0"

#define CORAZON1                "\u2764"
#define CORAZON2                "\u2765"
#define CORAZON3                "\u2661"
#define CORAZON4                "\u2766"
#define CORAZON5                "\u2767"
#define CORAZON6                "\u10E6"

#define POKER1                  "\u2665"
#define POKER2                  "\u2666"
#define POKER3                  "\u2663"
#define POKER4                  "\u2660"

#define NOTA_MUSICAL1           "\u266A"
#define NOTA_MUSICAL2           "\u266B"

#define SOL                     "\u263C"

#define CRUZ1                   "\u2020"
#define CRUZ2                   "\u2021"
#define CRUZ3                   "\u271D"
#define CRUZ4                   "\u2628"
#define CRUZ5                   "\u271E"
#define CRUZ6                   "\u2626"
#define CRUZ7                   "\u2629"
#define CRUZ8                   "\u2720"
#define CRUZ9                   "\u271B"
#define CRUZ10                  "\u271C"
#define CRUZ11                  "\u2720"
#define CRUZ12                  "\u271A"

#define FLECHA_IZQUIERDA        "\u2190"
#define FLECHA_DERECHA          "\u2192"
#define FLECHA_ARRIBA           "\u2191"
#define FLECHA_ABAJO            "\u2193"

#define PUNTA_IZQUIERDA         "\u25C4"
#define PUNTA_DERECHA           "\u25BA"
#define PUNTA_ARRIBA            "\u25B2"
#define PUNTA_ABAJO             "\u25BC"

/*-* SImbolos de gEnero *-*/
#define FEMENINO                "\u2640"
#define MASCULINO               "\u2642"

#define SIMBOLO_PAZ             "\u262E"
#define AMOR_Y_PAZ              "\u270C"

#define ESTRELLA1               "\u272C"
#define ESTRELLA2               "\u272D"
#define ESTRELLA3               "\u272E"
#define ESTRELLA4               "\u272F"
#define ESTRELLA5               "\u2730"
#define ESTRELLA6               "\u2721"
#define ESTRELLA7               "\u22C6"
#define ESTRELLA8               "\u2722"
#define ESTRELLA9               "\u2723"
#define ESTRELLA10              "\u2724"
#define ESTRELLA11              "\u2725"
#define ESTRELLA12              "\u274B"
#define ESTRELLA13              "\u2726"
#define ESTRELLA14              "\u2727"
#define ESTRELLA15              "\u2729"
#define ESTRELLA16              "\u272A"
#define ESTRELLA17              "\u272B"
#define ESTRELLA18              "\u2605"

#define LUNA1                   "\u263E"
#define LUNA2                   "\u263D"

/*-* SImbolos matemAticos *-*/
#define RAIZ                    "\u221A"
#define INFINITO                "\u221E"

#define INTEGRAL_ARRIBA         "\u2320"
#define INTEGRAL_ABAJO          "\u2321"

#define MAS_MENOS               "\u00B1"
#define MENOR_IGUAL             "\u2264"
#define MAYOR_IGUAL             "\u2265"
#define APROXIMADO              "\u2248"
#define EXACTO                  "\u2261"

#define UNION                   "\u222A"
#define INTERSECCION            "\u2229"

#define ALFA                    "\u03B1"
#define BETA                    "\u00DF"
#define GAMMA                   "\u0390"
#define PI                      "\u03C0"
#define SIGMA                   "\u03A3"
#define SIGMA_MINUS             "\u03C3"
#define MIU                     "\u00B5"
#define TAU                     "\u03C4"
#define PHI                     "\u03A6"
#define THETA                   "\u0398"
#define OMEGA                   "\u03A9"
#define DELTA                   "\u03B4"
#define PHI_MINUS               "\u03C6"
#define EPSILON                 "\u03B5"

#endif // Fin _WIN32 4

#ifdef __cplusplus
} // Cierre de exportaciOn a cpp
#endif

#endif // Fin _CARACTERES_ESPECIALES_H
