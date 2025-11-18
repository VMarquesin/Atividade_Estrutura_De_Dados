#include <stdio.h>
#include "../leitor.c"

int main() {
    int regiao;

    printf("Selecione a região para cálculo do frete:\n");
    printf("1 - Sul\n");
    printf("2 - Sudeste\n");
    printf("3 - Centro-Oeste\n");
    printf("4 - Nordeste\n");
    printf("5 - Norte\n");
    printf("Opção: ");
    
    regiao = ler_num_inteiro();
    
    switch(regiao) {
        case 1: // Sul
            printf("O frete é: R$ 5,00\n");
            break;
        case 2: // Sudeste
            printf("O frete é: R$ 5,00\n");
            break;
        case 3: // Centro-Oeste
            printf("O frete é: R$ 7,50\n");
            break;
        case 4: // Nordeste
            printf("O frete é: R$ 12,50\n");
            break;
        case 5: // Norte
            printf("O frete é: R$ 15,00\n");
            break;
        default:
            printf("Região inválida.\n");
    }

    return 0;
}