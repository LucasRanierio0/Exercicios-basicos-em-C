#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int soma(int *vet, int tam)
{
	int j,s;
	s = 0;
	for(j=0;j<tam;j++)
	{
		s = s + vet[j];
	}
	return s;
}

float media (int *vet, int tam)
{
	float s,m;
	int j;
	s = 0;
	for(j=0;j<tam;j++)
	{
		s = s + vet[j];
	}
	m = s/tam;
	return m;
}

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	//int [4]={5,3,1,8};
	int v[20];
	int i;
	int x;
	
	printf("Entre com a quantidade de valores:");
	scanf("%d",&x);
	
	for(i=0;i<x;i++)
	{
		printf("Entre com o %do valor:",i+1);
		scanf("%d",&v[i]);
	}
	
	printf("Soma do vetor:%d\n",soma(v,x));
	printf("Média do vetor:%.2f\n",media(v,x));
	
	return 1;
}
