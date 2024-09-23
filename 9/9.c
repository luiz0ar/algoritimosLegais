#include <stdio.h>

int main() {
    int numeroEscolhido, i;
    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &numeroEscolhido);

    // Loop para percorrer os multiplicadores de 1 a 10
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numeroEscolhido, i, numeroEscolhido * i);
    }

    return 0;
}