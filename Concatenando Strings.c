#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100], concatenada[200];

    // Leia duas strings
    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);
    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);

    // Remover o '\n' ao final das strings
    string1[strcspn(string1, "\n")] = 0;
    string2[strcspn(string2, "\n")] = 0;

    // Concatene as strings
    strcpy(concatenada, string1);
    strcat(concatenada, string2);
    printf("String concatenada: %s\n", concatenada);
}
