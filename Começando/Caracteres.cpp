#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void escreva(char *ps)
{
	int i;
	for(i=0;ps[i]!=0;i++)
	{
		printf("%c",ps[i]);
	}
}

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	//char s[8]={'M','a','r','c','o','s'};
	char n[8];
	printf("Entre com o seu nome:");
	//gets(n); Imprime string com espaço
	scanf("%s",&n);
	escreva(n);
	//printf("%s",n);
	return 1;
}
