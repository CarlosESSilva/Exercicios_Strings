#include <stdio.h>
#include <string.h>

void inverte(char *str) {
    int inicio = 0, fim = 0;
    while (str[fim] != '\0' && str[fim] != '\n') fim++;
    fim--;

    while (inicio < fim) {
        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;
        inicio++;
        fim--;
    }
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    inverte(str);
    printf("String invertida: %s", str);
}
