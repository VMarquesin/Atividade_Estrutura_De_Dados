#include <stdio.h>

int main() {
    int numero_secreto = 21; 
    int tentativa;

    printf(" ACERTE O NÚMERO SECRETO \n");
    printf("Tente adivinhar o número secreto entre 1 e 100.\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &tentativa);

        if (tentativa == numero_secreto) {
            printf("Otimo!!! Você acertou o número secreto, era: %d!\n", numero_secreto);
            break;
        } 
        else if (tentativa > numero_secreto) {
            printf("O número secreto é MENOR que %d.\n", tentativa);
        } 
        else {
            printf("O número secreto é MAIOR que %d.\n", tentativa);
        }
    }

    return 0;
}