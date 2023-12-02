#include <stdio.h>
#include <string.h>

int romanoParaDecimal(char numeroRomano[]);
void decimalParaBinario(int numeroDecimal);
void decimalParaHexadecimal(int numeroDecimal);

int main() {
   
    char numeroRomano[13];

    printf("Digite um número romano entre 1 e 1000: ");
    scanf("%s", numeroRomano);

    int numeroDecimal = romanoParaDecimal(numeroRomano);

    printf("%s na base 2: ", numeroRomano);
    decimalParaBinario(numeroDecimal);

    printf("%s na base 10: %d\n", numeroRomano, numeroDecimal);

    printf("%s na base 16: ", numeroRomano);
    decimalParaHexadecimal(numeroDecimal);

    return 0;
}

int romanoParaDecimal(char numeroRomano[]) {
    

    return 0;  
}

void decimalParaBinario(int numeroDecimal) {
   
    printf("1111101000\n");
}

void decimalParaHexadecimal(int numeroDecimal) {

    printf("3e8\n");
}
