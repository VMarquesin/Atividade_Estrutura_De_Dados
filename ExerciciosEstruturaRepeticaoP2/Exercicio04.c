#include <stdio.h>
#include <stdlib.h>
#include <time.h>  

int main() {
    srand(time(NULL));

    int saldo = 1000;
    int numero_aleatorio;
    int tentativa;

    printf(" JOGO DA SORTE \n");
    while (saldo > 0 && saldo < 3000) {
        
        numero_aleatorio = (rand() % 10) + 1; 

        printf("\nSaldo atual: %d pontos\n", saldo);
        printf("Tente acertar o número sorteado (1 a 10), boa sorte!!\nDigite sua tentativa: ");
        scanf("%d", &tentativa);

        if (tentativa == numero_aleatorio) {
            printf("Você acertou!!! Ganhou 300 pontos.\n");
            saldo = saldo + 300;
        } else {
            printf("Poxa... Você errou, o número era %d. Perdeu 100 pontos. \nMas tente novamente, boa sorte!\n", numero_aleatorio);
            saldo = saldo - 100;
        }
    }

    printf("\nFIM DE JOGO\n");
    if (saldo >= 3000) {
        printf("PARABÉNS!!! Você atingiu %d pontos e venceu o JOGO DA SORTE!!!\n", saldo);
    } else {
        printf("GAME OVER. Seu saldo acabou. \nMas tente novamente, você vai conseguir!\n");
    }

    return 0;
}