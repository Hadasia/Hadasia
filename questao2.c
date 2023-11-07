#include <stdio.h>
#include <string.h>

// o define esta sendo a declaracao de uma constante. 
#define MAX_JOGADORES 11
#define MAX_CARACTERES 31

typedef struct {
    char nome[MAX_CARACTERES];
    char posicao;
    int forca;
} Jogador;

typedef struct {
    char nome[MAX_CARACTERES];
    Jogador jogadores[MAX_JOGADORES];
} Time;

float calcularForcaPonderada(Jogador jogadores[MAX_JOGADORES]) {
    float G = 0, L = 0, Z = 0, V = 0, M = 0, A = 0;

    for (int i = 0; i < MAX_JOGADORES; i++) {
        if (jogadores[i].posicao == 'G') {
            G = jogadores[i].forca;
        } else if (jogadores[i].posicao == 'L') {
            L += jogadores[i].forca;
        } else if (jogadores[i].posicao == 'Z') {
            Z += jogadores[i].forca;
        } else if (jogadores[i].posicao == 'V') {
            V += jogadores[i].forca;
        } else if (jogadores[i].posicao == 'M') {
            M += jogadores[i].forca;
        } else if (jogadores[i].posicao == 'A') {
            A += jogadores[i].forca;
        }
    }

    float forca = (8 * G + 10 * (L) + 5 * (Z) + 8 * (V) + 11 * (M) + 12 * (A)) / 100.0;
    return forca;
}

int main() {
    Time times[2];

    for (int i = 0; i < 2; i++) {
        //printf("Nome do time %d: ", i + 1);
        scanf(" %[^\n]", times[i].nome);

        for (int j = 0; j < MAX_JOGADORES; j++) {
            //printf("Jogador %d:\n", j + 1);
            //printf("Nome: ");
            scanf(" %30[^;];%c;%d", times[i].jogadores[j].nome, &times[i].jogadores[j].posicao, &times[i].jogadores[j].forca);
       
        }
    }

    float forca_times[2];
    for (int i = 0; i < 2; i++) {
        forca_times[i] = calcularForcaPonderada(times[i].jogadores);
    }


    printf("%s: %.2f de forca\n", times[0].nome, forca_times[0]);
    printf("%s: %.2f de forca\n", times[1].nome, forca_times[1]);

    if (forca_times[0] > forca_times[1]) {
        printf("%s eh mais forte\n", times[0].nome);
    } else if (forca_times[0] < forca_times[1]) {
        printf("%s eh mais forte\n", times[1].nome);
    } else {
        printf("Os times tem a mesma forca\n");
    }

    return 0;
}
