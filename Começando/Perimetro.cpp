#include <stdio.h>
#include <conio.h>

int main(void)
{
	float p,r;
	printf("Entre com o raio da circunferencia:");
	scanf("%f",&r);
	p = 2 * 3.1415926535 * r;
	
	printf("Perimetro da circunferencia = %f",p);
}
