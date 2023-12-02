#include <stdio.h>

int main() {

    int meses;
    double aporte, taxaJuros;

    // Receber os valores como entrada
    printf("Digite o número de meses, o aporte mensal e a taxa de juros mensal:\n");
    scanf("%d %lf %lf", &meses, &aporte, &taxaJuros);

    // Calcular e mostrar o montante ao fim de cada mês
    for (int i = 1; i <= meses; i++) {
        double valorTotal = aporte * ((1 + taxaJuros) * (1 + taxaJuros) - 1) / taxaJuros;
        printf("Montante ao fim do mes %d: R$ %.2lf\n", i, valorTotal);
        aporte += valorTotal;  // Atualizar o aporte para o próximo mês
    }

    return 0;
}
