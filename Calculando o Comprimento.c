#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int comprimento = 0;

    // Leia uma string
    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    // Calcule o comprimento sem usar strlen
    while (string[comprimento] != '\0' && string[comprimento] != '\n') {
        comprimento++;
    }

    printf("O comprimento da string é: %d\n", comprimento);
}
