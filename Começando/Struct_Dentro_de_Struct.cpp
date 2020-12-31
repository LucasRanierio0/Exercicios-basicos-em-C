#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

//typedef struct
//{
//	int nro;
//	char dv;
//} tcodigo;

typedef struct
{
	float notas[4];
	char nome[30];
//	tcodigo codigo;
	struct
	{
		int nro;
		char dv;
	} codigo;
} aluno;

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	
	aluno reg;
	
	reg.notas[0]=6.8;
	strcpy(reg.nome,"Marcos");
	reg.codigo.nro=1001;
	reg.codigo.dv=2;
	
	printf("Nota................:%.2f\n",reg.notas[0]);
	printf("Nome................:%s\n",reg.nome);
	printf("Número..............:%d\n",reg.codigo.nro);
	printf("Dígito Verificador..:%d\n",reg.codigo.dv);
	
	return 1;
}
