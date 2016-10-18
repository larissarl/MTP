#include <stdio.h>

int binomial(int a, int n);

int main() {
	int a, n;
	int compara;
	printf("Entre com o total de bolas: ");
	scanf("%d",&a);
	printf("E quantas retirar: ");
	scanf("%d",&n);
	compara = binomial(a,n);
	if(compara)
		printf("O total de possibilidades = %d\n", compara);
	else
		printf("O numero de bolas a retirar e maior do que se tem.\n");
	return 0;
}

int binomial(int a, int n) {
	if(n == 0)
		return 1;
	else
		return a*binomial(a-1,n-1)/n;
}
