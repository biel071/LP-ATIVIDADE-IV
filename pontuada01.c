#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define TAM 3

struct dados_pessoa
{
    char nome[200];
    char telefone[10];
    char email[200];
};

void verificacaoDados(struct dados_pessoa contato[], char *buscador)
{
    int i;

    for (i = 0; i < TAM; i++)
    {

        if (strcmp(contato[i].nome, buscador) == 0)
        {
            printf("O numero desejado e: %s \n", contato[i].telefone);
            return;
        }
        printf("\nContato não encontrado.");
    }
}

int main()
{
    int i;
    char buscador[200];

    struct dados_pessoa contato[TAM];

    for (i = 0; i < TAM; i++)
    {
        printf("DIGITE O NOME DO CONTATO: \n");
        gets(contato[i].nome);

        printf("DIGITE SEU TELEFONE: \n");
        gets(contato[i].telefone);

        printf("DIGITE SEU E-MAIL: \n");
        gets(contato[i].email);

        printf("\n");
    }

    printf("BUSCA DE CONTATOS.\n");
    printf("\n");
    printf("DIGITE O NOME PARA ACESSAR O CONTATO DESEJADO: ");
    gets(buscador);

    verificacaoDados(contato,buscador);

    return 0;
}
