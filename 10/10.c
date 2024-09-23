#include <stdio.h>
#include <string.h>

struct Aluno {
    char nomeDoAluno[50];
    int idadeDoAluno;
    float notaDoAluno;
};

int main() {
    struct Aluno alunos[3];
    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do aluno: ");
        scanf("%s", alunos[i].nomeDoAluno);
        printf("Digite a idade do aluno: ");
        scanf("%d", &alunos[i].idadeDoAluno);
        printf("Digite a nota do aluno: ");
        scanf("%f", &alunos[i].notaDoAluno);
    }
    printf("Os alunos sao:\n");
    for(int i = 0; i < 3; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("NomeDo Aluno: %s\n", alunos[i].nomeDoAluno);
        printf("Idade Aluno: %d\n", alunos[i].idadeDoAluno);
        printf("Nota Aluno: %f\n", alunos[i].notaDoAluno);
        printf("\n");
    }
    return 0;
}