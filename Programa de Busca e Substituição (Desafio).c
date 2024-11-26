#include <stdio.h>
#include <string.h>

void buscaESubstitui(char *texto, char *busca, char *substitui) {
    char resultado[500] = "";
    int i = 0;

    while (texto[i] != '\0') {
        if (strncmp(&texto[i], busca, strlen(busca)) == 0) {
            strcat(resultado, substitui);
            i += strlen(busca);
        } else {
            strncat(resultado, &texto[i], 1);
            i++;
        }
    }
    strcpy(texto, resultado);
}

int main() {
    char texto[500], busca[50], substitui[50];

    printf("Digite o texto: ");
    fgets(texto, sizeof(texto), stdin);
    printf("Digite a palavra a ser buscada: ");
    fgets(busca, sizeof(busca), stdin);
    printf("Digite a palavra substituta: ");
    fgets(substitui, sizeof(substitui), stdin);

    busca[strlen(busca) - 1] = '\0'; // Remove o '\n'
    substitui[strlen(substitui) - 1] = '\0';

    buscaESubstitui(texto, busca, substitui);
    printf("Texto atualizado: %s\n", texto);
}
