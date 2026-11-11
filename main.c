#include <stdlib.h>
#include <stdio.h>

int fatorial(int n) {
    int fat = 1;

    for (int i = 1; i <= n; i++) {
        fat = fat * i;
    }

    return fat;
}

void pascal() {
    int n;

    printf("Digite o numero de linhas: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int valor = 1;

        for (int j = 0; j <= i; j++) {
            printf("%d ", valor);
            valor = valor * (i - j) / (j + 1);
        }

        printf("\n");
    }
}

void arranjo() {
    int n, p;

    printf("Digite N: ");
    scanf("%d", &n);

    printf("Digite P: ");
    scanf("%d", &p);

    printf("Resultado: %d\n",
           fatorial(n) / fatorial(n - p));
}

void permutacao() {
    int n;

    printf("Digite N: ");
    scanf("%d", &n);

    printf("Resultado: %d\n", fatorial(n));
}

void combinacao() {
    int n, p;

    printf("Digite N: ");
    scanf("%d", &n);

    printf("Digite P: ");
    scanf("%d", &p);

    printf("Resultado: %d\n",
           fatorial(n) / (fatorial(p) * fatorial(n - p)));
}

int main() {
    int opcao;

    do {
        printf("\n1 - Triangulo de Pascal\n");
        printf("2 - Arranjo\n");
        printf("3 - Permutacao\n");
        printf("4 - Combinacao\n");
        printf("0 - Sair\n");

        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                pascal();
                break;

            case 2:
                arranjo();
                break;

            case 3:
                permutacao();
                break;

            case 4:
                combinacao();
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
