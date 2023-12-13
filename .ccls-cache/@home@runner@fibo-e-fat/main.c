#include <stdio.h>

int main() {
    int x, cont, n_anterior = 1, n_sucessor = 1, atual = 0, resp;
    int aux, fat = 1;

    printf("Digite um número para calcular o fatorial e a sequência de Fibonacci: ");
    scanf("%i", &x);

    for (aux = x; aux > 1; aux--) {
        fat = fat * aux;
    }

    printf("Fatorial de %d: %d\n", x, fat);

    printf("Sequência de Fibonacci até %d termos:\n", x);
    for (cont = 1; cont <= x; ++cont) {
        atual = n_anterior + n_sucessor;
        n_anterior = n_sucessor;
        n_sucessor = atual;
        resp = atual - n_anterior;
        printf("%d, ", resp);
    }

    printf("\n");

    return 0;
}