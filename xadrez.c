#include <stdio.h>

/*
==========================================================
DESAFIO DE XADREZ - NÍVEL MESTRE
==========================================================

Neste nível serão utilizados conceitos mais avançados:

- Torre: função recursiva
- Bispo: função recursiva + loops aninhados
- Rainha: função recursiva
- Cavalo: loops aninhados com continue e break

Os valores dos movimentos são definidos diretamente
no código, conforme solicitado pelo desafio.
==========================================================
*/


// ========================================================
// FUNÇÃO RECURSIVA - TORRE
// ========================================================
// A Torre deverá movimentar 5 casas para a direita.
//
// A função recebe a quantidade de casas restantes.
// A cada chamada:
// 1. Verifica se ainda existem casas.
// 2. Imprime "Direita".
// 3. Chama a própria função diminuindo uma casa.
//
// Quando casas chegar a zero, a função termina.
// ========================================================

void moverTorre(int casas) {

    // Caso base da recursão.
    if (casas <= 0) {
        return;
    }

    printf("Direita\n");

    // Chamada recursiva.
    moverTorre(casas - 1);
}


// ========================================================
// FUNÇÃO RECURSIVA - BISPO
// ========================================================
// O Bispo movimenta-se na diagonal.
//
// Neste desafio ele irá movimentar 5 casas para:
// Cima + Direita.
//
// Cada chamada representa uma casa percorrida
// diagonalmente.
// ========================================================

void moverBispo(int casas) {

    // Caso base.
    if (casas <= 0) {
        return;
    }

    printf("Cima Direita\n");

    // Chamada recursiva.
    moverBispo(casas - 1);
}


// ========================================================
// FUNÇÃO RECURSIVA - RAINHA
// ========================================================
// A Rainha deverá movimentar 8 casas para a esquerda.
//
// Assim como nas outras funções recursivas,
// a quantidade de casas diminui a cada chamada.
// ========================================================

void moverRainha(int casas) {

    // Caso base.
    if (casas <= 0) {
        return;
    }

    printf("Esquerda\n");

    // Chamada recursiva.
    moverRainha(casas - 1);
}


// ========================================================
// FUNÇÃO PRINCIPAL
// ========================================================

int main() {

    // ====================================================
    // DEFINIÇÃO DOS MOVIMENTOS
    // ====================================================

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Cavalo:
    // duas casas para cima e uma para a direita.
    int casasCimaCavalo = 2;
    int casasDireitaCavalo = 1;

    // Variáveis utilizadas nos loops.
    int vertical;
    int horizontal;


    // ====================================================
    // MOVIMENTO DA TORRE
    // ====================================================
    // A movimentação agora é realizada através da
    // função recursiva moverTorre().
    // ====================================================

    printf("====================================\n");
    printf("         MOVIMENTO DA TORRE\n");
    printf("====================================\n");

    moverTorre(casasTorre);


    // ====================================================
    // MOVIMENTO DO BISPO - RECURSIVIDADE
    // ====================================================
    // Primeiro demonstramos o movimento do Bispo
    // utilizando a função recursiva.
    // ====================================================

    printf("\n====================================\n");
    printf("     MOVIMENTO DO BISPO - RECURSAO\n");
    printf("====================================\n");

    moverBispo(casasBispo);


    // ====================================================
    // BISPO - LOOPS ANINHADOS
    // ====================================================
    // O desafio também solicita a utilização de loops
    // aninhados para representar o movimento do Bispo.
    //
    // Loop externo:
    // representa o movimento vertical (Cima).
    //
    // Loop interno:
    // representa o movimento horizontal (Direita).
    //
    // Como o Bispo anda diagonalmente, para cada movimento
    // vertical realizamos um movimento horizontal.
    // ====================================================

    printf("\n====================================\n");
    printf("   BISPO COM LOOPS ANINHADOS\n");
    printf("====================================\n");

    for (vertical = 0; vertical < casasBispo; vertical++) {

        // Loop interno responsável pelo movimento horizontal.
        for (horizontal = 0; horizontal < 1; horizontal++) {

            printf("Cima Direita\n");
        }
    }


    // ====================================================
    // MOVIMENTO DA RAINHA
    // ====================================================
    // A Rainha utiliza uma função recursiva para percorrer
    // oito casas para a esquerda.
    // ====================================================

    printf("\n====================================\n");
    printf("         MOVIMENTO DA RAINHA\n");
    printf("====================================\n");

    moverRainha(casasRainha);


    // ====================================================
    // MOVIMENTO DO CAVALO
    // ====================================================
    // O Cavalo deverá realizar o seguinte movimento:
    //
    // Cima
    // Cima
    // Direita
    //
    // formando o movimento em "L".
    //
    // Neste nível utilizamos loops aninhados e estruturas
    // de controle como continue e break.
    // ====================================================

    printf("\n====================================\n");
    printf("         MOVIMENTO DO CAVALO\n");
    printf("====================================\n");

    for (vertical = 0; vertical < casasCimaCavalo; vertical++) {

        printf("Cima\n");

        /*
        Enquanto ainda não chegamos à segunda casa para cima,
        utilizamos continue para seguir para a próxima
        repetição do FOR.
        */

        if (vertical < casasCimaCavalo - 1) {
            continue;
        }

        /*
        Quando as duas casas para cima já foram percorridas,
        iniciamos o loop interno responsável pelo movimento
        para a direita.
        */

        horizontal = 0;

        while (horizontal < casasDireitaCavalo) {

            printf("Direita\n");

            horizontal++;

            /*
            Como precisamos apenas de uma casa para a direita,
            o break encerra o loop interno após o movimento.
            */

            if (horizontal == casasDireitaCavalo) {
                break;
            }
        }
    }


    // ====================================================
    // FIM DO PROGRAMA
    // ====================================================

    return 0;
}