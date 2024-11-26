#include <stdio.h>
#include <string.h>

char *minhaStrstr(char *str, char *substr) {
    for (int i = 0; str[i] != '\0'; i++) {
        int j = 0;
        while (str[i + j] == substr[j] && substr[j] != '\0') {
            j++;
        }
        if (substr[j] == '\0') {
            return &str[i];
        }
    }
    return NULL;
}

int main() {
    char str[100], substr[50];

    printf("Digite a string principal: ");
    fgets(str, sizeof(str), stdin);
    printf("Digite a substring: ");
    fgets(substr, sizeof(substr), stdin);

    substr[strlen(substr) - 1] = '\0'; // Remove o '\n'

    char *resultado = minhaStrstr(str, substr);
    if (resultado) {
        printf("Substring encontrada: %s\n", resultado);
    } else {
        printf("Substring não encontrada.\n");
    }
}
