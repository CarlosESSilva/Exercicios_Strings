#include <stdio.h>
#include <string.h>

int contaOcorrencias(char *str, char c) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100], c;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    printf("Digite um caractere: ");
    scanf("%c", &c);

    printf("O caractere '%c' aparece %d vezes.\n", c, contaOcorrencias(str, c));
}
