#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

typedef struct
{
	int matricula;
	char nome[30];
	float nota[4];
} aluno;

void ledados(aluno *preg)
{
	printf("Entre com a matr�cula:");
	scanf("%d",&preg->matricula); // -> indica um ponteiro para estrutura;
	
	fflush(stdin); // limpar o buffer;
	printf("Entre com o nome:");
	gets(preg->nome);
	
	int i;
	for (i=0;i<4;i++)
	{
		printf("Entre com a %d� nota:",i+1);
		scanf("%f",&preg->nota[i]);
	}

}

float calcmedia(aluno *preg)
{
	int i;
	float s=0;
	for (i=0;i<4;i++)
	{
		s += preg->nota[i];
	}
	return s/4;
}

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	
	aluno reg;
	
	ledados(&reg);
		
//	reg.matricula = 1;
//	strcpy(reg.nome,"Marcos");
//	reg.nota[0] = 9.3;
	
	printf("Matr�cula:%d\n",reg.matricula);
	printf("Nome.....:%s\n",reg.nome);
	printf("Notas....:%.2f %.2f %.2f %.2f\n",reg.nota[0],reg.nota[1],reg.nota[2],reg.nota[3]);
	
	float m=calcmedia(&reg);
	
	printf("M�dia das notas:%.2f\n",m);

	return 1;
}
