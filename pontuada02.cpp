#include <stdio.h>
#include <string.h>


struct Aluno {
    char nome[200];
    char dataNascimento[200];
    float notas[2]; 
    float media;
};


float calcularMedia(struct Aluno aluno) {
    return (aluno.notas[0] + aluno.notas[1]) / 2.0;
}


void verificarAprovacao(struct Aluno aluno) {
    if (aluno.media >= 7.0) {
        printf("%s esta APROVADO =)\n", aluno.nome);
    } else {
        printf("%s esta REPROVADO =(\n", aluno.nome);
    }
}

int main() {
    
    struct Aluno alunos[5];

   
    for (int i = 0; i < 5; i++) {
        printf("Informe os dados do aluno %d:\n", i + 1);

        printf("Nome: ");
        scanf("%s", alunos[i].nome);

        printf("Data de Nascimento: ");
        scanf("%s", alunos[i].dataNascimento);

        
        for (int j = 0; j < 2; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);
        }

        
        alunos[i].media = calcularMedia(alunos[i]);

        printf("\n");
    }

    
    for (int i = 0; i < 5; i++) {
        printf("Media de %s: %.2f\n", alunos[i].nome, alunos[i].media);
        verificarAprovacao(alunos[i]);
        printf("\n");
    }

    return 0;
}

