#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void mostrar_cabecalho() {
    printf(" --- Inicio do programa ----\n");
}

void mostrar_rodape() {
    printf(" --- Fim do programa ---\n");
}

char* lertexto() {

    char* texto = malloc(60 * sizeof(char));
    fgets(texto, 60, stdin);
    texto[strcspn(texto, "\n")] = 0;

    return texto;
}

int ler_num_inteiro() {

    int num_int;
    scanf("%d", &num_int);
    getchar();

    return num_int;
}


float ler_num_decimal() {
    
    float num_dec;
    scanf("%f", &num_dec);
    getchar();

    return num_dec;
}


