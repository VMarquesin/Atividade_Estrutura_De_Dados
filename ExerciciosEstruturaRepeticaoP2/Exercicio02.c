#include <stdio.h>

int main() {
    int opcao;
    int contador = 0;
    float total = 0.0;

    printf("--- LOJA DE ROUPAS ---\n");

    while (contador < 5) {
        printf("\nEscolha o item %d de 5:\n", contador + 1);
        printf("1 - Camisa  (R$ 40,00)\n");
        printf("2 - Calça   (R$ 80,00)\n");
        printf("3 - Cinto   (R$ 25,00)\n");
        printf("4 - Sapatos (R$ 120,00)\n");
        printf("5 - Chapéu  (R$ 35,00)\n");
        printf("0 - Finalizar compra\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            break; 
        }

        if (opcao == 1) {
            total = total + 40.00;
            printf(">> Camisa adicionada.\n");
            contador++;
        } else if (opcao == 2) {
            total = total +  80.00;
            printf(">> Calça adicionada.\n");
            contador++;
        } else if (opcao == 3) {
            total = total +  25.00;
            printf(">> Cinto adicionado.\n");
            contador++;
        } else if (opcao == 4) {
            total = total +  120.00;
            printf(">> Sapatos adicionados.\n");
            contador++;
        } else if (opcao == 5) {
            total = total + 35.00;
            printf(">> Chapéu adicionado.\n");
            contador++;
        } else {
            printf(">> Opção inválida, tente novamente.\n");
        }
    }

    printf("\n\n");
    printf("Compra finalizada!\n");
    printf("Você comprou %d itens.\n", contador);
    printf("Valor total a pagar: R$ %.2f\n", total);

    return 0;
}