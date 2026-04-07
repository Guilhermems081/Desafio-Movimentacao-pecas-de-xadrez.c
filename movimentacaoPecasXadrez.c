#include<stdio.h>

int main() {

    int movimento = 0;
    int peca;

    printf("Sua vez de jogar\n");
    printf("1- Rainha\n");
    printf("2- Bispo\n");
    printf("3- Torre\n");
    printf("4- Cavalo\n");
    printf("Qual peça vai mover: ");
    scanf("%d", &peca);

    switch (peca)
    {
    case 1:
        printf("Rainha Move-se:\n");
        while(movimento < 8) {
            printf("Esquerda\n");
            movimento++;
        }
        break;
    case 2:
        printf("Bispo Move-e:\n");
        do {
            printf("Cima, Direita\n");
            movimento++;
        } while(movimento<5);
        
        break;
    case 3:
        printf("Torre move-se:\n");
        for(movimento; movimento<5; movimento++) {
            printf("Direita\n");
        }

        break;
    case 4:

        int j = 1;
        printf("Cavalo move-se:\n");

        for(int i = 1; i <= 1; i++) {
            while(j<=2) {
                char direcao[20] = "Baixo";
                printf("%s\n", direcao);
                j++;
            }
            char direcao[20] = "Esquerda";
            printf("%s\n", direcao);
        }
        break;
    default:
    printf("Opção inválida!");
        break;
    }
    return 0;
}