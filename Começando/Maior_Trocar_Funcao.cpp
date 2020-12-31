#include <stdio.h>

void maior(int x,int y,int *z)
{
	if(x>y)
	{
	*z = x;
	}
	else
	{
	*z = y;
	}
}

void trocar(int *x,int *y)
{
	int aux;
	aux = *x;
	*x = *y;
	*y = aux;
}

int main(void)
{
	int m;
	int a,b;
	printf("Entre com o primeiro valor:");
	scanf("%d",&a);
	printf("Entre com o segundo valor:");
	scanf("%d",&b);		
	maior(a,b,&m);
	printf("Maior valor=%d\n",m);
	
	trocar(&a,&b);
	printf("Valor de a=%d\n",a);
	printf("Valor de b=%d\n",b);	
	
	return 1;
}
