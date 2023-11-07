#include <stdio.h>

void valoresinteiros(int valores[], int n) {
    int numerosint = n;

    while (numerosint > 1) {
        for (int i = 0; i < numerosint - 1; i++) {
            valores[i] = valores[i] + valores[i + 1];
        }

        numerosint--;

        for (int i = 0; i < numerosint; i++) {
            printf("%d", valores[i]);

            if (i < numerosint - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int valores[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &valores[i]);
    }

    int n = 10;

    for (int i = 0; i < n; i++) {
        printf("%d", valores[i]);

        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    valoresinteiros(valores, n);

    return 0;
}
