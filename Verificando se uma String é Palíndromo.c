#include <stdio.h>
#include <string.h>

int ehPalindromo(char *str) {
    int inicio = 0, fim = strlen(str) - 2; // -2 por causa do '\n'
    while (inicio < fim) {
        if (str[inicio] != str[fim]) {
            return 0; // Não é palíndromo
        }
        inicio++;
        fim--;
    }
    return 1; // É palíndromo
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    if (ehPalindromo(str)) {
        printf("A string é um palíndromo.\n");
    } else {
        printf("A string não é um palíndromo.\n");
    }
}
