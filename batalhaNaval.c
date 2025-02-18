#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main()
{

    int tabuleiro[10][10];
    int posicaoH, posicaoV;
    int navioQtd;

    // Iniciando o tabuleiro
    for (int i = 0; i < 10; i++)
    { // LINHAS
        for (int j = 0; j < 10; j++)
        {                        // COLUNAS
            tabuleiro[i][j] = 0; // inicia todos as variaveis com 0 para gerar a agua
        }
    }

    printf("**##Batalha Naval##**\n");

    printf("Quantos navios serao usados?\n"); // determina a quantidade de navios
    scanf("%d", &navioQtd);

    for (int n = 0; n < navioQtd; n++)
    { // determina a quantidade de loops de acordo com a quantidade de navios
        printf("Entre com as coordenadas do navio %d (0 a 9):\n", n + 1);

        for (int m = 0; m < 3; m++)
        {                                         // loop para entrar com as partes do navio
            printf("parte %d do navio\n", m + 1); // informa qual parte sera populada
            printf("Horizontal: \n");
            scanf("%i", &posicaoH);
            printf("Vertical: \n");
            scanf("%i", &posicaoV);

            // Verifica se a posição é válida
            if (posicaoH >= 0 && posicaoH < 10 && posicaoV >= 0 && posicaoV < 10)
            {
                if (tabuleiro[posicaoV][posicaoH] != 3)
                {
                    tabuleiro[posicaoV][posicaoH] = 3;
                }
                else
                {
                    printf("Posicao ja esta ocupada!\n");
                    m--; // repete a pergunta
                }
            }
            else
            {
                printf("Coordenadas invalidas! Tente novamente.\n");
                m--; // forca uma entrada valida
            }
        }
    }

    // imprimindo o tabuleiro populado
    printf("\n\n***Tabuleiro***\n\n");
    for (int i = 0; i < 10; i++)
    { // LINHAS
        for (int j = 0; j < 10; j++)
        { // COLUNAS
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}
