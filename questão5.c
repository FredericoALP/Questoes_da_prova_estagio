#include <stdio.h>

int main() {
    char str[100];
    int tamanho = 0;
    int i;
    char temp;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    while (str[tamanho] != '\0') {
        tamanho++;
    }
    if (str[tamanho - 1] == '\n') {
        str[tamanho - 1] = '\0';
        tamanho--;
    }

    for (i = 0; i < tamanho / 2; i++) {
        temp = str[i];
        str[i] = str[tamanho - 1 - i];
        str[tamanho - 1 - i] = temp;
    }

    printf("String invertida: %s\n", str);

    return 0;
}
