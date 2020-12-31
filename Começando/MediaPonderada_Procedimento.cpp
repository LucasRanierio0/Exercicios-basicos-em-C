#include <stdio.h>

void media(float n1, float n2, float n3, char c, float *x)
{
	if (c == 'A')
	{
		*x = (n1 + n2 + n3) / 3;
	}
	else
	{
		*x = (n1*5 + n2*3 + n3*2) / 10;
	}
}

int main(void)
{
	float a,b,c,d;
	char t;
	printf("Calculo da Media\n");
	printf("Nota 1:");
	scanf("%f",&a);
	printf("Nota 2:");
	scanf("%f",&b);
	printf("Nota 3:");
	scanf("%f",&c);
	printf("Media aritmetica <A> ou Ponderada <P>:");
	scanf(" %c",&t);
	media(a,b,c,t,&d);
	printf("Media:%.2f",d);
	return 1;
}
