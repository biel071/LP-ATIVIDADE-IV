#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

# define tam 3
struct informacoes {
	char nome [200];
	float preco;
	int quantidade;
};
float valortotal(struct informacoes produto){
	return produto.preco * produto.quantidade;
}

void compras(struct informacoes * produto, int quanti){
	 if (quanti <= produto->quantidade) {
        produto->quantidade -= quanti;
        printf("Compra realizada com sucesso!\n");
    } else {
        printf("Quantidade em estoque insuficiente.\n");
    }
}


void estoque (struct informacoes produto) {
    printf("Nome: %s\n", produto.nome);
    printf("Preco: %.2f\n", produto.preco);
    printf("Quantidade em estoque: %d\n", produto.quantidade);
    printf("Valor total em estoque: %.2f\n", valortotal(produto));
}



int main(){
	
	struct informacoes produto;  
	int produto1;
	int qcompra;
	
	
    printf("Digite o nome do produto: ");
    gets(produto.nome);
    printf("Digite o preco do produto: ");
    scanf("%f", &produto.preco);
    printf("Digite a quantidade em estoque: ");
    scanf("%d", &produto.quantidade);
	

	do 
	{
	    printf("\nMenu:\n");
        printf("1 - Realizar uma compra\n");
        printf("2 - Consultar estoque\n");
        printf("3 - Consultar estoque\n");
        printf("4 - Sair do programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &produto1);
        	fflush (stdin);
		
		
	switch ( produto1)
	 {
	 	case 1:
	 		printf ("Digite o nome do produto desejado:");
	 		gets (produto.nome);
	 		fflush (stdin);
	 		printf ("Digite o preco do produto:");
	 		scanf ("%f",&produto.preco);
	 		fflush (stdin);
			printf ("Digite a quantidade em estoque:");
	 		scanf ("%d",&produto.quantidade);
	 		fflush (stdin);
	 		
			
			printf ("O nome do produto desejado:%s",produto.nome);
	 		printf ("\nO preco do produto:R$%.2f\n",produto.preco);
	 		printf ("\nA quantidade em estoque:%d\n",produto.quantidade);
	 		break;
	 		case 2:
		        printf("Digite a quantidade a ser comprada: ");
                scanf("%d", &qcompra);
                compras(&produto, qcompra);
	 		    fflush (stdin);
	 		
			printf ("\nA quantidade em estoque:%d\n",produto.quantidade);
				case 3:
                estoque(produto);
                break;
	 		
	 		break;
	 		case 4:
                printf("Programa encerrado...\n");
                break;
	 		default :
	 			printf ("Numero invalido.");
	 			break;
		  
		 }	
		
		 
		
	}while(produto1!=4);
	
	
	return 0;
}
