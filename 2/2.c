#include <stdio.h>

int main()

{
    int valor;
    int Vvalor;

    printf("Digite o primeiro valor:");
    scanf("%d", &valor);
    printf("Digite o segundo valor:");
    scanf("%d", &Vvalor);

    if(Vvalor > valor) { 
        printf("%d", Vvalor);
    }
    else if(Vvalor < valor) {
        printf("%d", valor);
    }
    else(Vvalor == valor){
    pintf("Os valores são iguais.");
    }
    return 0;
}

//Luiz Lindo