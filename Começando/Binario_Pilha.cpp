#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"Portuguese");
	int n,r,i=0;
	int m[8];
	
	printf("Entre com um número inteiro:");
	scanf("%d",&n);
	
	while (n > 0) {
		r = n % 2;
		m[i] = r;
		i++;
		n = n / 2;
	}
	
	printf("Correspondente em binário:");
	while (i > 0) {
		i--;
		printf("%d",m[i]);
	}
	
	return 1;
}
