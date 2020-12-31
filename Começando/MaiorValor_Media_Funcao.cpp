#include <stdio.h>

//int maior(int x,int y)
//{
//	int z;
//	if (x>y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;
//}

int maior(int x,int y)
{
	if (x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

//float media(int x,int y)
//{
//	float z;
//	z = (x + y) /2.0;
//	return z;
//}

float media(int x,int y)
{
	return (x + y) /2.0;
}

int main(void)
{
	int a=7,b=10;
	
	int m = maior(a,b);
	
	printf("Maior valor=%d\n",m);
	
	printf("Media=%.2f\n",media(a,b));
	
//	int n = media(a,b);
	
//	printf("Media=%.2f\n",n);
	
	return 1;
}
