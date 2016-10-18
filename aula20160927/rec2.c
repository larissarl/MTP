#include <stdio.h>

int soma_rec(int *A, int tamanho);

int main() {
	int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
	int N = sizeof(A)/sizeof(int);
	printf("A soma dos elementos do vetor = %d\n", soma_rec(A, N));
	return 0;
}

int soma_rec(int *A, int tamanho) {
	int ultimo = tamanho - 1;
	if(tamanho > 0)
		return A[ultimo] + soma_rec(A, tamanho - 1);
	else
		return 0; // elemento neutro da soma
}
