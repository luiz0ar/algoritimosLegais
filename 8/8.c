#include <stdio.h>

int str_length(char str[]){
    int contador;

    for(contador =0; str[contador] != '\0'; ++contador);

    return contador;
}

int main()

{
    char palavra[100];

    printf("Digite uma palavra:" );
    scanf("%s", palavra);

    int length = str_length(palavra);

    printf("A palavra possui: %d", length);

    return 0;
}

//Luiz Lindo