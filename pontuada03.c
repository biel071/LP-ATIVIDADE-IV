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

float calcularValorTotal(const struct informacoes *produto) {
    return produto->preco * produto->quantidade;
}
void consultarEstoque(const struct Produto *produto) {
    printf("Estoque de %s: %d unidades\n", produto->nome, produto->quantidadeEstoque);
    printf("Valor total em estoque: R$%.2f\n", calcularValorTotal(produto));


int main(){
	
	struct informacoes produto  
	int produto1;
	int cal;
	

	do 
	{
	    printf("\nMenu:\n");
        printf("1 - Realizar uma compra\n");
        printf("2 - Consultar estoque\n");
        printf("3 - Sair do programa\n");
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
	 		
			system ("cls||clear");	
			printf ("O nome do produto desejado:%s",produto.nome);
	 		printf ("\nO preco do produto:R$%.2f\n",produto.preco);
	 		printf ("\nA quantidade em estoque:%d\n",produto.quantidade);
	 		break;
	 		case 2:
			printf ("Digite o nome do produto:");
	 		gets (produto.nome);
			 fflush (stdin);	 		
	 		printf ("Digite a quantidade em estoque:");
	 		scanf ("%d",&produto.quantidade);
	 		fflush (stdin);
	 		
	 		 consultarEstoque(Produto);
	 		
	 		system ("cls||clear");	
			printf ("O nome do produto desejado:%s",produto.nome);
			printf ("\nA quantidade em estoque:%d\n",produto.quantidade);
	 		break;
	 		default :
	 			printf ("Numero invalido.");
	 			break;
		  
		 }	
		
		 
		
	}while(produto1!=3);
	
	
	return 0;
}
