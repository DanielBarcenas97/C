#include <stdio.h>
#include "caracteres_especiales.h"

#define imp(x) printf("%s : %s\n", #x, x)

int main(void) {

    puts("Letras minusculas");
    imp(A);
    imp(E);
    imp(I);
    imp(O);
    imp(U);
    imp(N);

    getchar();

    puts("Letras mayusculas");
    imp(MA);
    imp(ME);
    imp(MI);
    imp(MO);
    imp(MU);
    imp(MN);

    getchar();

    puts("Signos ortograficos");
    imp(Q);
    imp(X);

    getchar();

    puts("Cajas");
    imp(CAJA1[ESQUINA_SUPERIOR_DERECHA]);
    imp(CAJA1[ESQUINA_SUPERIOR_IZQUIERDA]);
    imp(CAJA1[ESQUINA_INFERIOR_DERECHA]);
    imp(CAJA1[ESQUINA_INFERIOR_IZQUIERDA]);
    imp(CAJA1[TRUNCAMIENTO_SUPERIOR]);
    imp(CAJA1[TRUNCAMIENTO_DERECHO]);
    imp(CAJA1[TRUNCAMIENTO_INFERIOR]);
    imp(CAJA1[TRUNCAMIENTO_IZQUIERDO]);
    imp(CAJA1[BARRA_HORIZONTAL]);
    imp(CAJA1[BARRA_VERTICAL]);
    imp(CAJA1[CENTRO]);
    puts("");
    imp(CAJA2[ESQUINA_SUPERIOR_DERECHA]);
    imp(CAJA2[ESQUINA_SUPERIOR_IZQUIERDA]);
    imp(CAJA2[ESQUINA_INFERIOR_DERECHA]);
    imp(CAJA2[ESQUINA_INFERIOR_IZQUIERDA]);
    imp(CAJA2[TRUNCAMIENTO_SUPERIOR]);
    imp(CAJA2[TRUNCAMIENTO_DERECHO]);
    imp(CAJA2[TRUNCAMIENTO_INFERIOR]);
    imp(CAJA2[TRUNCAMIENTO_IZQUIERDO]);
    imp(CAJA2[BARRA_HORIZONTAL]);
    imp(CAJA2[BARRA_VERTICAL]);
    imp(CAJA2[CENTRO]);
    puts("");
    imp(CAJA3[ESQUINA_SUPERIOR_DERECHA]);
    imp(CAJA3[ESQUINA_SUPERIOR_IZQUIERDA]);
    imp(CAJA3[ESQUINA_INFERIOR_DERECHA]);
    imp(CAJA3[ESQUINA_INFERIOR_IZQUIERDA]);
    imp(CAJA3[TRUNCAMIENTO_SUPERIOR]);
    imp(CAJA3[TRUNCAMIENTO_DERECHO]);
    imp(CAJA3[TRUNCAMIENTO_INFERIOR]);
    imp(CAJA3[TRUNCAMIENTO_IZQUIERDO]);
    imp(CAJA3[BARRA_HORIZONTAL]);
    imp(CAJA3[BARRA_VERTICAL]);
    imp(CAJA3[CENTRO]);

    getchar();

    puts("Caracteres de bloque");
    imp(BDB);
    imp(BDM);
    imp(BDA);

    getchar();

    puts("Caras");
    imp(CARITA1);
    imp(CARITA2);

    getchar();

    puts("Figuras");
    imp(EQUIS);
    imp(CIRCULO_TRANSPARENTE);
    imp(CIRCULO_SOLIDO);
    imp(CUADRO_TRANSPARENTE);
    imp(CUADRO_SOLIDO);

    getchar();

    puts("Corazones");
    imp(CORAZON1);
    imp(CORAZON2);
    imp(CORAZON3);
    imp(CORAZON4);
    imp(CORAZON5);
    imp(CORAZON6);

    getchar();

    puts("Figuras del poker");
    imp(POKER1);
    imp(POKER2);
    imp(POKER3);
    imp(POKER4);

    getchar();

    puts("Musica");
    imp(NOTA_MUSICAL1);
    imp(NOTA_MUSICAL2);

    getchar();

    puts("Sol");
    imp(SOL);

    puts("Cruces");
    imp(CRUZ1);
    imp(CRUZ2);
    imp(CRUZ3);
    imp(CRUZ4);
    imp(CRUZ5);
    imp(CRUZ6);
    imp(CRUZ7);
    imp(CRUZ8);
    imp(CRUZ9);
    imp(CRUZ10);
    imp(CRUZ11);

    getchar();

    puts("Direcciones");
    imp(FLECHA_IZQUIERDA);
    imp(FLECHA_DERECHA);
    imp(FLECHA_ARRIBA);
    imp(FLECHA_ABAJO);

    imp(PUNTA_IZQUIERDA);
    imp(PUNTA_DERECHA);
    imp(PUNTA_ARRIBA);
    imp(PUNTA_ABAJO);

    getchar();

    puts("Genero");
    imp(FEMENINO);
    imp(MASCULINO);

    puts("")<`0`>;
    puts("Paz");

    imp(SIMBOLO_PAZ);
    imp(AMOR_Y_PAZ);

    getchar();

    puts("Estrellas");
    imp(ESTRELLA1);
    imp(ESTRELLA2);
    imp(ESTRELLA3);
    imp(ESTRELLA4);
    imp(ESTRELLA5);
    imp(ESTRELLA6);
    imp(ESTRELLA7);
    imp(ESTRELLA8);
    imp(ESTRELLA9);
    imp(ESTRELLA10);
    imp(ESTRELLA11);
    imp(ESTRELLA12);
    imp(ESTRELLA13);
    imp(ESTRELLA14);
    imp(ESTRELLA15);
    imp(ESTRELLA16);
    imp(ESTRELLA17);
    imp(ESTRELLA18);

    puts("Lunas");
    imp(LUNA1);
    imp(LUNA2);

    puts("");
    puts("Mates");
    imp(RAIZ);
    imp(INFINITO);
    imp(INTEGRAL_ARRIBA);
    imp(INTEGRAL_ABAJO);

    getchar();

    imp(MAS_MENOS);
    imp(MENOR_IGUAL);
    imp(MAYOR_IGUAL);
    imp(APROXIMADO);
    imp(EXACTO);

    imp(UNION);
    imp(INTERSECCION);

    getchar();

    puts("Letras griegas");
    imp(ALFA);
    imp(BETA);
    imp(GAMMA);
    imp(PI);
    imp(SIGMA);
    imp(SIGMA_MINUS);
    imp(MIU);
    imp(TAU);
    imp(PHI_MINUS);
    imp(THETA);
    imp(OMEGA);
    imp(DELTA);
    imp(PHI);
    imp(EPSILON);

    getchar();

    return 0;
}
