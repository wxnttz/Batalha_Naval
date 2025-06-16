#include <stdio.h>

int main() {
    // === NÍVEL NOVATO ===

    // Tamanho do tabuleiro 5x5
    int tabuleiro[5][5] = {0};

    // Posição do navio horizontal (linha 1, colunas 0 a 3)
    for (int j = 0; j < 4; j++) {
        tabuleiro[1][j] = 1; // Marca o navio na horizontal
    }

    // Posição do navio vertical (coluna 4, linhas 0 a 3)
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][4] = 1; // Marca o navio na vertical
    }

    // Exibe as coordenadas dos navios
    printf("=== Coordenadas dos Navios (Nível Novato) ===\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 1) {
                printf("Navio em: (%d, %d)\n", i, j);
            }
        }
    }

    // === NÍVEL AVENTUREIRO ===

    // Tabuleiro 10x10 zerado
    int avancado[10][10] = {0};

    // Navio 1: horizontal na linha 2 (tamanho 4)
    for (int j = 0; j < 4; j++) {
        avancado[2][j] = 3;
    }

    // Navio 2: vertical na coluna 6 (tamanho 4)
    for (int i = 0; i < 4; i++) {
        avancado[i][6] = 3;
    }

    // Navio 3: diagonal principal (top-left para bottom-right)
    for (int i = 0; i < 4; i++) {
        avancado[i][i] = 3;
    }

    // Navio 4: diagonal secundária (top-right para bottom-left)
    for (int i = 0; i < 4; i++) {
        avancado[i][9 - i] = 3;
    }

    // Exibe o tabuleiro completo
    printf("\n=== Tabuleiro Completo (Nível Aventureiro) ===\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", avancado[i][j]);
        }
        printf("\n");
    }

    // === NÍVEL MESTRE ===

    // Cone (base 5, altura 3)
    int cone[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };

    // Cruz (tamanho 5x5, cruz no meio)
    int cruz[5][5] = {0};
    for (int i = 0; i < 5; i++) {
        cruz[2][i] = 1; // Linha do meio
        cruz[i][2] = 1; // Coluna do meio
    }

    // Octaedro (base 3x5)
    int octaedro[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    // Exibição das habilidades
    printf("\n=== Habilidade: Cone ===\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    printf("\n=== Habilidade: Cruz ===\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    printf("\n=== Habilidade: Octaedro ===\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    return 0;
}