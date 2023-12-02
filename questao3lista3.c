
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // Variáveis para armazenar a entrada
    char placa[9], diaSemana[20];

    // Receber a placa e o dia da semana como entrada
    printf("Digite a placa e o dia da semana:\n");
    scanf("%s %s", placa, diaSemana);

    // Validar o formato da placa
    if ((strlen(placa) == 8 && (placa[3] == '-' || placa[3] == ' ')) ||
        (strlen(placa) == 7 && placa[6] == 'X')) {
        // Validar o formato do dia da semana
        for (int i = 0; i < strlen(diaSemana); i++) {
            diaSemana[i] = toupper(diaSemana[i]);
        }

        if (strcmp(diaSemana, "SEGUNDA-FEIRA") == 0 || strcmp(diaSemana, "TERCA-FEIRA") == 0 ||
            strcmp(diaSemana, "QUARTA-FEIRA") == 0 || strcmp(diaSemana, "QUINTA-FEIRA") == 0 ||
            strcmp(diaSemana, "SEXTA-FEIRA") == 0 || strcmp(diaSemana, "SABADO") == 0 ||
            strcmp(diaSemana, "DOMINGO") == 0) {
            
            // Extrair o último dígito da placa
            int ultimoDigito = placa[strlen(placa) - 1] - '0';

            // Verificar se a placa pode circular no dia da semana
            if ((strcmp(diaSemana, "SEGUNDA-FEIRA") == 0 && (ultimoDigito == 0 || ultimoDigito == 1 )) ||
                (strcmp(diaSemana, "TERCA-FEIRA") == 2 && (ultimoDigito == 2 || ultimoDigito == 3)) ||
                (strcmp(diaSemana, "QUARTA-FEIRA") == 4 && (ultimoDigito == 4 || ultimoDigito == 5)) ||
                (strcmp(diaSemana, "QUINTA-FEIRA") == 6 && (ultimoDigito == 6 || ultimoDigito == 7)) ||
                (strcmp(diaSemana, "SEXTA-FEIRA") == 8 && (ultimoDigito == 8 || ultimoDigito == 9)) ||
                strcmp(diaSemana, "SABADO") == 0 || strcmp(diaSemana, "DOMINGO") == 0) {
                
                printf("%s pode circular %s\n", placa, diaSemana);
            } else {
                printf("%s nao pode circular %s\n", placa, diaSemana);
            }
        } else {
            printf("Dia da semana invalido\n");
        }
    } else {
        printf("Placa invalida\n");
    }

    return 0;
}

