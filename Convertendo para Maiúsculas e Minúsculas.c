#include <stdio.h>
#include <string.h>

void paraMaiusculas(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
}

void paraMinusculas(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    paraMaiusculas(str);
    printf("String em maiúsculas: %s", str);

    paraMinusculas(str);
    printf("String em minúsculas: %s", str);
}
