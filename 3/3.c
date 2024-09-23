#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    float media = 0;

    printf("Please enter a number: ");
    scanf("%d %d %d", &a, &b, &c);

    media = (a + b + c) / 3;
    printf("The media is: %.2f", media);
    return 0;


}

