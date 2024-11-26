#include <stdio.h>
#include <string.h>

void quebraPalavras(char *str) {
    char *palavra = str;
    while (*palavra) {
        if (*palavra == ' ' || *palavra == '\n') {
            *palavra = '\0';
            printf("%s\n", str);
            str = palavra + 1;
        }
        palavra++;
    }
    if (*str) {
        printf("%s\n", str);
    }
}

int main() {
    char str[100];

    printf("Digite uma frase: ");
    fgets(str, sizeof(str), stdin);

    printf("Palavras na frase:\n");
    quebraPalavras(str);
}
