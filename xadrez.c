#include <stdio.h>

int main() {

    // ==========================================================
    // DESAFIO DE XADREZ - NÍVEL AVENTUREIRO
    // ==========================================================
    // Neste nível mantemos os movimentos das peças do desafio
    // anterior e adicionamos o movimento do Cavalo.
    //
    // Torre  -> for
    // Bispo  -> while
    // Rainha -> do-while
    // Cavalo -> loops aninhados (for + while)
    // ==========================================================


    // ==========================================================
    // DEFINIÇÃO DA QUANTIDADE DE CASAS
    // ==========================================================
    // Os valores são definidos diretamente no código,
    // conforme solicitado pelo desafio.
    // ==========================================================

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento do Cavalo:
    // duas casas para baixo e uma para a esquerda.
    int casasBaixoCavalo = 2;
    int casasEsquerdaCavalo = 1;

    // Variáveis utilizadas para controlar os loops.
    int contador;
    int contadorCavalo;


    // ==========================================================
    // MOVIMENTO DA TORRE - FOR
    // ==========================================================
    // A Torre deve movimentar 5 casas para a direita.
    // Cada repetição do FOR representa uma casa percorrida.
    // ==========================================================

    printf("====================================\n");
    printf("         MOVIMENTO DA TORRE\n");
    printf("====================================\n");

    for (contador = 0; contador < casasTorre; contador++) {

        printf("Direita\n");
    }


    // ==========================================================
    // MOVIMENTO DO BISPO - WHILE
    // ==========================================================
    // O Bispo deve movimentar 5 casas na diagonal para cima
    // e para a direita.
    //
    // Por ser um movimento diagonal, imprimimos as duas
    // direções em cada repetição.
    // ==========================================================

    printf("\n====================================\n");
    printf("         MOVIMENTO DO BISPO\n");
    printf("====================================\n");

    contador = 0;

    while (contador < casasBispo) {

        printf("Cima Direita\n");

        contador++;
    }


    // ==========================================================
    // MOVIMENTO DA RAINHA - DO-WHILE
    // ==========================================================
    // A Rainha deve movimentar 8 casas para a esquerda.
    //
    // No DO-WHILE o comando é executado antes da verificação
    // da condição de repetição.
    // ==========================================================

    printf("\n====================================\n");
    printf("         MOVIMENTO DA RAINHA\n");
    printf("====================================\n");

    contador = 0;

    do {

        printf("Esquerda\n");

        contador++;

    } while (contador < casasRainha);


    // ==========================================================
    // MOVIMENTO DO CAVALO - LOOPS ANINHADOS
    // ==========================================================
    // O Cavalo possui um movimento diferente das outras peças.
    // Ele se movimenta formando a letra "L".
    //
    // Neste desafio o movimento solicitado é:
    //
    // 2 casas para baixo
    // 1 casa para a esquerda
    //
    // Resultado esperado:
    //
    // Baixo
    // Baixo
    // Esquerda
    //
    // Para atender ao requisito do desafio utilizamos dois
    // loops aninhados:
    //
    // Loop externo -> FOR
    // Loop interno -> WHILE
    // ==========================================================

    printf("\n====================================\n");
    printf("         MOVIMENTO DO CAVALO\n");
    printf("====================================\n");


    // O FOR controla o movimento de duas casas para baixo.
    for (contador = 0; contador < casasBaixoCavalo; contador++) {

        printf("Baixo\n");


        // ======================================================
        // LOOP INTERNO
        // ======================================================
        // O movimento para a esquerda deve acontecer somente
        // depois que as duas casas para baixo forem percorridas.
        // ======================================================

        if (contador == casasBaixoCavalo - 1) {

            contadorCavalo = 0;

            while (contadorCavalo < casasEsquerdaCavalo) {

                printf("Esquerda\n");

                contadorCavalo++;
            }
        }
    }


    // ==========================================================
    // FIM DO PROGRAMA
    // ==========================================================

    return 0;
}