#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	float x;
	float y;
}Ponto;
int main()
{
	FILE * taehyun;
	Ponto *vetor;
	char nomearq[32];
	int i;
	printf("QUAL O NOME DO ARQUIVO?\n");
	gets(nomearq);
	taehyun=fopen(nomearq, "rb");

	fseek (taehyun, 0 , SEEK_END);
	int quantidade = ftell (taehyun);
	rewind (taehyun);

	quantidade/=sizeof(Ponto);


	vetor=(Ponto*)malloc(quantidade*sizeof(Ponto));

	fread(vetor, sizeof(Ponto), quantidade, taehyun);

	for(i=0;i<quantidade;i++)
		printf("x=%g\ny=%g\n", vetor[i].x, vetor[i].y);

	fclose(taehyun);
	return 0;
}
