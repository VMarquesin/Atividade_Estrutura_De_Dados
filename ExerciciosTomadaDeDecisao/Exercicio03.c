#include <stdio.h>
#include "../leitor.c"

int main() {
    int opcao_carne, opcao_acomp, opcao_bebida;
    float total = 0.0;
    
    const char *nome_carne = "Nenhuma opção válida";
    const char *nome_acomp = "Nenhuma opção válida";
    const char *nome_bebida = "Nenhuma opção válida";

    // CARNE 
    printf("--- ESCOLHA A CARNE ---\n");
    printf("1 - Filé de frango (R$ 15,00)\n");
    printf("2 - Bisteca suína (R$ 15,00)\n");
    printf("3 - Carne de panela (R$ 17,50)\n");
    printf("4 - Peixe empanado (R$ 16,00)\n");
    printf("5 - Carne de soja (R$ 18,00)\n");
    printf("Escolha: ");
    opcao_carne = ler_num_inteiro();

    switch(opcao_carne) {
        case 1: 
            total = total + 15.00; 
            nome_carne = "Filé de frango";
            break;
        case 2: 
            total = total + 15.00; 
            nome_carne = "Bisteca suína"; 
            break;
        case 3: 
            total = total + 17.50; 
            nome_carne = "Carne de panela"; 
            break;
        case 4: 
            total = total + 16.00; 
            nome_carne = "Peixe empanado"; 
            break;
        case 5: 
            total = total + 18.00; 
            nome_carne = "Carne de soja"; 
            break;
        default: 
            nome_carne = "Opção Inválida";
    }

    // ACOMPANHAMENTO
    printf("\n--- ESCOLHA O ACOMPANHAMENTO ---\n");
    printf("1 - Arroz e feijão (R$ 10,00)\n");
    printf("2 - Arroz e fritas (R$ 11,00)\n");
    printf("3 - Macarrão alho e óleo (R$ 12,00)\n");
    printf("4 - Macarrão à bolonhesa (R$ 14,00)\n");
    printf("Escolha: ");
    opcao_acomp = ler_num_inteiro();

    switch(opcao_acomp) {
        case 1: 
            total = total + 10.00; 
            nome_acomp = "Arroz e feijão"; 
            break;
        case 2: 
            total = total + 11.00; 
            nome_acomp = "Arroz e fritas"; 
            break;
        case 3: 
            total = total + 12.00; 
            nome_acomp = "Macarrão alho e óleo"; 
            break;
        case 4: 
            total = total + 14.00; 
            nome_acomp = "Macarrão à bolonhesa"; 
            break;
        default: 
            nome_acomp = "Opção Inválida";
    }

    // BEBIDA
    printf("\n--- ESCOLHA A BEBIDA ---\n");
    printf("1 - Coca-Cola 200ml (R$ 2,50)\n");
    printf("2 - Suco de Laranja 200ml (R$ 4,50)\n");
    printf("3 - Água Mineral 350ml (R$ 1,50)\n");
    printf("Escolha: ");
    opcao_bebida = ler_num_inteiro();

    switch(opcao_bebida) {
        case 1: 
            total = total + 2.50; 
            nome_bebida = "Coca-Cola 200ml"; 
            break;
        case 2: 
            total = total + 4.50; 
            nome_bebida = "Suco de Laranja 200ml"; 
            break;
        case 3: 
            total = total + 1.50; 
            nome_bebida = "Água Mineral 350ml"; 
            break;
        default: 
            nome_bebida = "Opção Inválida";
    }

    printf("\n       RESUMO DO PEDIDO        \n\n");
    printf("Carne:          %s\n", nome_carne);
    printf("Acompanhamento: %s\n", nome_acomp);
    printf("Bebida:         %s\n", nome_bebida);
    printf("-------------------------------\n");
    printf("TOTAL A PAGAR:  R$ %.2f\n\n", total);

    return 0;
}