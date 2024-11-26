#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100], string3[100];

    // Leia uma string e imprima na tela
    printf("Digite uma string: ");
    fgets(string1, sizeof(string1), stdin);
    printf("Você digitou: %s", string1);

    // Leia duas strings e as imprima em linhas separadas
    printf("\nDigite a primeira string: ");
    fgets(string2, sizeof(string2), stdin);
    printf("Digite a segunda string: ");
    fgets(string3, sizeof(string3), stdin);

    printf("\nPrimeira string: %s", string2);
    printf("Segunda string: %s", string3);
}