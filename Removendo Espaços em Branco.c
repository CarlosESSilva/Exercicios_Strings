#include <stdio.h>
#include <string.h>

void removeEspacos(char *str) {
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    removeEspacos(str);
    printf("String sem espaços: %s\n", str);
}
