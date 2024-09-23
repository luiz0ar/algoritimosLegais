#include <stdio.h>

int main()

{
    int valor;
    int Vvalor;

    printf("Digite o primeiro valor:");
    scanf("%d", &valor);
    printf("Digite o segundo valor:");
    scanf("%d", &Vvalor);

    if(Vvalor > valor) { ;
        printf("%d", Vvalor);
    }
    else{
        printf("%d", valor);
    }
    return 0;
}