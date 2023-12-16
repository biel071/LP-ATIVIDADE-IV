#include <stdio.h>
#include <string.h>


struct ContaBancaria {
    int numeroConta;
    char titular[200];
    float saldo;
    char tipoConta[200];
};


void depositar(struct ContaBancaria *conta, float valor) {
    if (valor > 0) {
        conta->saldo += valor;
        printf("Deposito de R$ %.2f realizado com sucesso.\n", valor);
    } else {
        printf("Valor inválido para depósito.\n");
    }
}


void sacar(struct ContaBancaria *conta, float valor) {
    if (valor > 0 && valor <= conta->saldo) {
        conta->saldo -= valor;
        printf("Saque de R$ %.2f realizado com sucesso.\n", valor);
    } else {
        printf("Valor invalido para saque ou saldo insuficiente.\n");
    }
}


void saldo(struct ContaBancaria conta) {
    printf("Saldo atual: R$ %.2f\n", conta.saldo);
}

int main() {
   
    struct ContaBancaria minhaConta = {123, "Joao", 1000.0, "corrente"};

    int opcao;
    float valor;

   
    do {
        printf("\nMenu:\n");
        printf("1 - Depositar\n");
        printf("2 - Sacar\n");
        printf("3 - Imprimir Saldo\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao) {
            case 1:
                printf("Digite o valor do deposito: ");
                scanf("%f", &valor);
                depositar(&minhaConta, valor);
                break;
            case 2:
                printf("Digite o valor do saque: ");
                scanf("%f", &valor);
                sacar(&minhaConta, valor);
                break;
            case 3:
                saldo(minhaConta);
                break;
            case 4:
                printf("Fechando programa.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}

