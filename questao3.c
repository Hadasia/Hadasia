#include <stdio.h>

int main() {
    int matrizA[4][4];
    int matrizB[4][4];
    int resultado[4][4];
    char operacao[10];

    // Lê a matriz A
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    // Lê a matriz B
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }

    // Lê a operação
    scanf("%s", operacao);

    // faz a operação e preenche a matriz "resultado"
    if (strcmp(operacao, "soma") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                resultado[i][j] = matrizA[i][j] + matrizB[i][j];
            }
        }
    } else if (strcmp(operacao, "sub") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                resultado[i][j] = matrizA[i][j] - matrizB[i][j];
            }
        }
    } else if (strcmp(operacao, "mult") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                resultado[i][j] = 0;
                for (int k = 0; k < 4; k++) {
                    resultado[i][j] += matrizA[i][k] * matrizB[k][j];
                }
            }
        }
    }

    // Imprime o resultado que vai ser formatado
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
