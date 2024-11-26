#include <stdio.h>
#include <string.h>

void substituiCaractere(char *str, char alvo, char substituto) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == alvo) {
            str[i] = substituto;
        }
    }
}

int main() {
    char str[100], alvo, substituto;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    printf("Digite o caractere a ser substituído: ");
    scanf("%c", &alvo);
    getchar(); // Limpa o buffer
    printf("Digite o caractere substituto: ");
    scanf("%c", &substituto);

    substituiCaractere(str, alvo, substituto);
    printf("String após substituição: %s\n", str);
}
