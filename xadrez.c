#include <stdio.h>

int main() {

    // ==========================================================
    // DESAFIO SUPER TRUNFO - XADREZ
    // NÍVEL NOVATO
    // ==========================================================
    // Objetivo:
    // Simular o movimento de três peças de xadrez utilizando
    // diferentes estruturas de repetição.
    //
    // Torre  -> for
    // Bispo  -> while
    // Rainha -> do-while
    // ==========================================================


    // ==========================================================
    // DEFINIÇÃO DOS MOVIMENTOS
    // ==========================================================
    // A quantidade de casas de cada peça é definida diretamente
    // no código, conforme solicitado pelo desafio.
    // ==========================================================

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Variável utilizada para controlar as repetições.
    int contador;


    // ==========================================================
    // MOVIMENTO DA TORRE
    // ==========================================================
    // A Torre deve se movimentar 5 casas para a direita.
    //
    // Para este movimento utilizamos a estrutura FOR.
    // A cada repetição representa uma casa percorrida.
    // ==========================================================

    printf("====================================\n");
    printf("         MOVIMENTO DA TORRE\n");
    printf("====================================\n");

    for (contador = 0; contador < casasTorre; contador++) {

        printf("Direita\n");
    }


    // ==========================================================
    // MOVIMENTO DO BISPO
    // ==========================================================
    // O Bispo deve se movimentar 5 casas na diagonal
    // para cima e para a direita.
    //
    // Para este movimento utilizamos a estrutura WHILE.
    //
    // Como o movimento é diagonal, são apresentadas duas
    // direções em cada casa percorrida: Cima e Direita.
    // ==========================================================

    printf("\n====================================\n");
    printf("         MOVIMENTO DO BISPO\n");
    printf("====================================\n");

    // Reinicia o contador antes de começar o próximo movimento.
    contador = 0;

    while (contador < casasBispo) {

        printf("Cima Direita\n");

        // Incrementa o contador após cada casa percorrida.
        contador++;
    }


    // ==========================================================
    // MOVIMENTO DA RAINHA
    // ==========================================================
    // A Rainha deve se movimentar 8 casas para a esquerda.
    //
    // Para este movimento utilizamos a estrutura DO-WHILE.
    //
    // Diferente do while, o do-while executa primeiro o bloco
    // de código e depois verifica a condição.
    // ==========================================================

    printf("\n====================================\n");
    printf("         MOVIMENTO DA RAINHA\n");
    printf("====================================\n");

    // Reinicia novamente o contador.
    contador = 0;

    do {

        printf("Esquerda\n");

        // Incrementa o contador após cada movimento.
        contador++;

    } while (contador < casasRainha);


    // ==========================================================
    // FIM DO PROGRAMA
    // ==========================================================

    return 0;
}