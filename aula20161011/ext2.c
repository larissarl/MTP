#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NCHAR 32

int _ID = 0; // id unico para produto/venda
int _NPROD = 0;
int _NVEND = 0;

typedef struct xprod {
	char nome[NCHAR];
	int codigo_produto;
	float preco;
} Produto;

typedef struct xvend {
	int codigo_venda;
	int qtde_prod;
	int * codigo_produto;
	int * quantidade;
} Venda;

void imprimeMenu();
Produto * incluiProduto(Produto * meus_produtos);
Produto * excluiProduto(Produto * meus_produtos);
Produto * buscaProduto(Produto * meus_produtos, int id);
void consultaProdutos(Produto * meus_produtos);
Venda * incluiVenda(Venda * minhas_vendas, Produto * meus_produtos);
Venda * excluiVenda(Venda * minhas_vendas, Produto * meus_produtos);
void consultaVendas(Venda * minhas_vendas,  Produto * meus_produtos);
void recebe(char tipo, void * endereco);
void recebeSTR(char * endereco, int n);

int main() {
	int opc, i;
	Produto * meus_produtos = NULL;
	Venda * minhas_vendas = NULL;
	do {
		imprimeMenu();
		recebe('i', &opc);
		switch(opc) {
			case 1:
			meus_produtos = incluiProduto(meus_produtos);
			break;
			case 2:
			meus_produtos = excluiProduto(meus_produtos);
			break;
			case 3:
			consultaProdutos(meus_produtos);
			break;
			case 4:
			minhas_vendas = incluiVenda(minhas_vendas, meus_produtos);
			break;
			case 5:
			minhas_vendas = excluiVenda(minhas_vendas, meus_produtos);
			break;
			case 6:
			consultaVendas(minhas_vendas, meus_produtos);
			break;
		}
	} while(opc < 7);
	free(meus_produtos);
	for(i = 0; i < _NVEND; i++) {
		free(minhas_vendas[i].codigo_produto);
		free(minhas_vendas[i].quantidade);
	}
	free(minhas_vendas);
	return 0;
}

void imprimeMenu() {
	printf("=========================\n");
	printf(":: Produto :::\n");
	printf ("1 - Incluir\t");
	printf ("2 - Excluir\t");
	printf ("3 - Consultar\n");
	printf(":: Venda :::::\n");
	printf ("4 - Incluir\t");
	printf ("5 - Excluir\t");
	printf ("6 - Consultar\n");
	printf(":: Outros ::::\n");
	printf ("7 - Sair\n");
	printf("=========================\n");
}

Produto * incluiProduto(Produto * meus_produtos) {
	int ultimo = _NPROD;
	_NPROD++;
	if(meus_produtos == NULL)
		meus_produtos = (Produto *) malloc(sizeof(Produto));
	else
		meus_produtos = (Produto *) realloc(meus_produtos,
			_NPROD*sizeof(Produto));
	_ID++;
	meus_produtos[ultimo].codigo_produto = _ID;
	printf("Entre com o nome do produto: ");
	recebeSTR(meus_produtos[ultimo].nome, NCHAR);
	printf("Entre com o preco: ");
	recebe('f', &(meus_produtos[ultimo].preco));
	return meus_produtos;
}

Produto * excluiProduto(Produto * meus_produtos) {
	int i, cod, nprod = 0;
	Produto * aux;
	aux = (Produto *) malloc(_NPROD*sizeof(Produto));
	consultaProdutos(meus_produtos);
	printf("Qual codigo deseja excluir? ");
	recebe('i', &cod);
	for(i = 0, nprod = 0; i < _NPROD; i++)
		if(meus_produtos[i].codigo_produto != cod) {
			aux[nprod] = meus_produtos[i];
			nprod++;
		}
	aux = (Produto *) realloc(aux, nprod*sizeof(Produto));
	free(meus_produtos);
	_NPROD = nprod;
	return aux;
}

Produto * buscaProduto(Produto * meus_produtos, int id) {
	int i;
	Produto * produto = NULL;
	for(i = 0; i < _NPROD; i++) {
		if(meus_produtos[i].codigo_produto == id)
			produto = meus_produtos + i;
	}
	return produto;
}

void consultaProdutos(Produto * meus_produtos) {
	int i;
	printf("=== Produtos (%d) ===\n\n", _NPROD);
	for(i = 0; i < _NPROD; i++) {
		printf("Codigo: %d\t", meus_produtos[i].codigo_produto);
		printf("Nome: %s\t", meus_produtos[i].nome);
		printf("Preco: R$ %.2f\n", meus_produtos[i].preco);
	}
	printf("\n");
}

Venda * incluiVenda(Venda * minhas_vendas, Produto * meus_produtos) {
	char opc;
	int ultimo = _NVEND, nprod;
	_NVEND++;
	if(minhas_vendas == NULL)
		minhas_vendas = (Venda *) malloc(sizeof(Venda));
	else
		minhas_vendas = (Venda *) realloc(minhas_vendas,
			_NVEND*sizeof(Venda));
	_ID++;
	minhas_vendas[ultimo].codigo_venda = _ID;
	minhas_vendas[ultimo].qtde_prod = 0;
	minhas_vendas[ultimo].codigo_produto = NULL;
	minhas_vendas[ultimo].quantidade = NULL;
	do {
		nprod = minhas_vendas[ultimo].qtde_prod;
		if(minhas_vendas[ultimo].codigo_produto == NULL) {
			minhas_vendas[ultimo].codigo_produto =
				(int *) malloc(sizeof(int));
			minhas_vendas[ultimo].quantidade =
				(int *) malloc(sizeof(int));
		}
		else {
			minhas_vendas[ultimo].codigo_produto = (int *) realloc(
				minhas_vendas[ultimo].codigo_produto,
				(nprod + 1)*sizeof(int));
			minhas_vendas[ultimo].quantidade = (int *) realloc(
				minhas_vendas[ultimo].quantidade,
				(nprod + 1)*sizeof(int));
		}
		minhas_vendas[ultimo].qtde_prod++;
		consultaProdutos(meus_produtos);
		printf("Entre com o codigo do produto: ");
		recebe('i', &(minhas_vendas[ultimo].codigo_produto[nprod]));
		printf("Entre com a quantidade: ");
		recebe('i', &(minhas_vendas[ultimo].quantidade[nprod]));
		printf("Mais um? (N - nao; S - sim): ");
		recebe('c', &opc);
	} while(opc != 'n' && opc != 'N');
	return minhas_vendas;
}

Venda * excluiVenda(Venda * minhas_vendas, Produto * meus_produtos) {
	int i, cod, nvend = 0;
	Venda * aux;
	aux = (Venda *) malloc(_NVEND*sizeof(Venda));
	consultaVendas(minhas_vendas, meus_produtos);
	printf("Qual codigo deseja excluir? ");
	recebe('i', &cod);
	for(i = 0, nvend = 0; i < _NVEND; i++) {
		if(minhas_vendas[i].codigo_venda != cod) {
			aux[nvend] = minhas_vendas[i];
			nvend++;
		}
		else {
			free(minhas_vendas[i].codigo_produto);
			free(minhas_vendas[i].quantidade);
		}
	}
	aux = (Venda *) realloc(aux, nvend*sizeof(Venda));
	free(minhas_vendas);
	_NVEND = nvend;
	return aux;
}

void consultaVendas(Venda * minhas_vendas, Produto * meus_produtos) {
	int i, j;
	float subtotal, soma;
	Produto * prod;
	printf("=== Vendas (%d) ===\n\n", _NVEND);
	for(i = 0; i < _NVEND; i++) {
		soma = 0.f;
		printf("Codigo: %d (%d produtos)\n",
			minhas_vendas[i].codigo_venda, minhas_vendas[i].qtde_prod);
		for(j = 0; j < minhas_vendas[i].qtde_prod; j++) {
			prod = buscaProduto(meus_produtos,
				minhas_vendas[i].codigo_produto[j]);
			printf("Nome: %s\t", prod->nome);
			printf("Quantidade: %d\t", minhas_vendas[i].quantidade[j]);
			subtotal = minhas_vendas[i].quantidade[j] * prod->preco;
			printf("Total: R$ %.2f\n", subtotal);
			soma += subtotal;
		}
		printf("Total da venda: R$ %.2f\n\n", soma);
	}
}

void recebe(char tipo, void * endereco) {
    int c;
    switch(tipo){
        case 'i': scanf("%d",(int*) endereco); break;
        case 'f': scanf("%f",(float*) endereco); break;
        case 'd': scanf("%lf",(double*) endereco); break;
        case 'c': scanf("%c",(char*) endereco); break;
    }
    while((c = getchar()) != EOF && c != '\n'); // apagar o buffer de entrada
}

void recebeSTR(char * endereco, int n) {
    fgets(endereco, n, stdin);
    if(endereco[strlen(endereco)-1] == 10)
       endereco[strlen(endereco)-1] = '\0';
}
