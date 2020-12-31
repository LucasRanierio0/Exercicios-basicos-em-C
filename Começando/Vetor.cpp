#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	//int v[4]={5,3,1,8};
	int v[4];
	int i;
	for(i=0;i<4;i++)
	{
		printf("Entre com o %do valor=",i+1);
		scanf("%d",&v[i]);
	}
	printf("Valores lidos:\n");
	for(i=0;i<4;i++)
	{
	printf("%d\n",v[i]);
	}
	return 1;
}
