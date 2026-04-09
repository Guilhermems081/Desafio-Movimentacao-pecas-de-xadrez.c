// Biblioteca de entrada e saída de dados
#include <stdio.h>

// Função que movimenta a rainha utilizando recursividade
void movimentoRainha(int movimento) {

    // Condição de parada: encerra quando não há mais movimentos
    if (movimento == 0) {
        return;
    }

    // Executa o movimento da rainha
    printf("Cima\n");

    // Chamada recursiva diminuindo o número de movimentos
    movimentoRainha(movimento - 1);
}

// Função que movimenta o bispo utilizando recursividade e loops aninhados
void movimentoBispo(int movimento) {

    // Condição de parada
    if (movimento == 0) {
        return;
    }

    int i = 0;

    // Loop externo (controle do movimento vertical)
    while (i < 1) {

        int j = 0;

        // Loop interno (controle do movimento horizontal)
        while (j < 1) {
            printf("Cima,"); // Parte vertical da diagonal
            j++;
        }

        // Parte horizontal da diagonal
        printf(" Direita\n");

        i++;
    }

    // Chamada recursiva para repetir o movimento
    movimentoBispo(movimento - 1);
}

// Função que movimenta a torre utilizando recursividade
void movimentoTorre(int movimento) {

    // Condição de parada
    if (movimento == 0) {
        return;
    }

    // Executa o movimento da torre
    printf("Direita\n");

    // Chamada recursiva
    movimentoTorre(movimento - 1);
}

// Função que movimenta o cavalo utilizando loops e controle de fluxo
void movimentoCavalo(int movimento) {

    // Loop que controla os passos do movimento em "L"
    for (int passo = 1; passo <= 3; passo++) {

        // Quando chega no último passo, muda a direção
        if (passo == 3) {
            printf("Direita\n");

            // Interrompe o loop após o movimento final
            break;
        }

        // Executa os dois primeiros movimentos (para cima)
        printf("Cima\n");
    }
}

int main() {

    // Variável que define quantos movimentos serão realizados
    int movimento = 5;

    // Variável para escolher a peça
    int peca;

    // Menu de seleção
    printf("Sua vez de jogar\n");
    printf("1- Rainha\n");
    printf("2- Bispo\n");
    printf("3- Torre\n");
    printf("4- Cavalo\n");
    printf("Qual peça vai mover: ");

    // Leitura da opção do usuário
    scanf("%d", &peca);

    // Estrutura de decisão para escolher a peça
    switch (peca) {

        case 1:
            printf("Rainha Move-se:\n");
            movimentoRainha(movimento);
            break;

        case 2:
            printf("Bispo Move-e:\n");
            movimentoBispo(movimento);
            break;

        case 3:
            printf("Torre move-se:\n");
            movimentoTorre(movimento);
            break;

        case 4:
            int j = 1;
            printf("Cavalo move-se:\n");
            movimentoCavalo(j);
            break;

        default:
            printf("Opção inválida!");
            break;
    }

    return 0;
}