#include <stdio.h>

int main() {
    int contador = 0;

    printf("Números divisíveis por 5 (de 0 a 500):\n");

    while (contador <= 500) {
        printf("%d ", contador);
        // Incrementa de 5 em 5
        contador += 5; 
    }
    
    printf("\n");
    return 0;
}