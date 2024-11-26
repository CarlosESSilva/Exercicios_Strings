#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100];

    // Leia duas strings
    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);
    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);

    // Compare as strings
    if (strcmp(string1, string2) == 0) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }
}
