#include <stdio.h>
#include <string.h>

void cifraCesar(char *texto, int chave) {
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] >= 'a' && texto[i] <= 'z') {
            texto[i] = ((texto[i] - 'a' + chave) % 26) + 'a';
        } else if (texto[i] >= 'A' && texto[i] <= 'Z') {
            texto[i] = ((texto[i] - 'A' + chave) % 26) + 'A';
        }
    }
}

int main() {
    char texto[100];
    int chave;

    printf("Digite o texto: ");
    fgets(texto, sizeof(texto), stdin);
    printf("Digite a chave de cifra: ");
    scanf("%d", &chave);

    cifraCesar(texto, chave);
    printf("Texto cifrado: %s\n", texto);

    // Descriptografar
    cifraCesar(texto, 26 - chave);
    printf("Texto descriptografado: %s\n", texto);
}
