#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //declaração de variáveis
    int numeroJogador, numeroAleatorio, tentativas = 5, pontos = 0, opcao, reiniciar, numeroJogador2;

    //declaração srand e aleatório
    srand(time(NULL));

    //Regras do jogo
    printf("------------ REGRAS ------------\n o computador vai rodar um numero aleatorio de possibilidades dos dados 1 a 6.\nSe caso o jogador acertar, ele ganha 1 ponto.\nCada jogo tem 5 tentativas para acertar.\nGanha se acertar todas as 5.\n ");


    // Loop repetição tentativas
    while (tentativas > 0) {
        printf("\nAdvinhe o numero do primeiro dado entre 1 e 6:\n");
        scanf("%d", &numeroJogador);
        printf("\nAdvinhe o numero do segundo dado entre 1 e 6:\n");
        scanf("%d", &numeroJogador2);

    // Condição if acertou / errou número aleatório
        numeroAleatorio = rand() % 9 + 1;
        if (numeroJogador, numeroJogador2 == numeroAleatorio) {
             pontos++;
            printf("Parabens! Voce acertou!\nQuantidade de pontos: %d\n", pontos);
        } else {
            printf("Voce errou.\nTente novamente.\nQuantidade de pontos:%d\n", pontos);
        }

        tentativas--;
        printf("\n****Voce tem o total de %d tentativas****\n", tentativas);
        }


    //resultado
    printf("\nSeu placar final: %d pontos\n", pontos);
    if (pontos == 5) {
        printf("Parabens! Voce ganhou!\n");
    } else {
        printf("Que pena! Voce perdeu. Reinicie o jogo e tente novamente!\n");
    }

    //Após finalização do jogo opções de reiniciar e fechar jogo
    printf("\n******* Escolha o proximo passo *******\n\n1.reiniciar o jogo?\n\n2.Fechar o programa\n\n");
        switch(opcao) {
        case 1:
            printf("\nReiniciando o programa\n");
            //function
            break;
        case 2:
            exit(0);
            break;
        }

    return 0;
}

