#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[20][20], x;
    int l, c;
    int encontrado = 0;
    int linha_encontrada = -1, coluna_encontrada = -1; // Inicializados com valores que indicam que o valor ainda n�o foi encontrado

    printf("Digite um valor para X: ");
    scanf("%d", &x);

    srand(time(NULL));

    // Preenchimento e exibi��o da matriz
    printf("Matriz:\n");
    for (l = 0; l < 20; l++) {
        for (c = 0; c < 20; c++) {
            matriz[l][c] = rand() % 100;
            printf("%d  ", matriz[l][c]);
        }
        printf("\n");
    }

    // Busca pelo valor na matriz
    for (l = 0; l < 20 && !encontrado; l++) {
        for (c = 0; c < 20 && !encontrado; c++) {
            if (matriz[l][c] == x) {
                encontrado = 1;
                linha_encontrada = l;
                coluna_encontrada = c;
            }
        }
    }

    // Verifica��o se o valor foi encontrado e, se sim, exibi��o da linha e coluna
    if (encontrado)
        printf("O valor %d foi encontrado na linha %d e coluna %d da matriz.\n", x, linha_encontrada, coluna_encontrada);
    else
        printf("O valor %d nao foi encontrado na matriz.\n", x);

    return 0;
}

