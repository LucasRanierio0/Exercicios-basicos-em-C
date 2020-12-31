#include <stdio.h>

char par(int n)
{
	if (n % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main(void)
{
	int a;
	printf("Entre com um valor inteiro e positivo:");
	scanf("%d",&a);
	if (par(a))
	{
	printf("O numero e par");
	}
	else
	{
	printf("O numero e impar");
	}
	return 1;
}
