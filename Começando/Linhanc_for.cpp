#include <stdio.h>
 
 void linha()
{
	printf("=========================\n");
}

void linhanc(int n) 
{
	int c;
	for(c=0;c<n;c++)
	{
		printf("=");
	}
}
 
int main(void)
{
	int k;
	linhanc(20);
	printf("\nUnifenas\n");
	linhanc(20);
	printf("\n");
	
	for(k=0;k<15;k++)
	{
		linhanc(k);
		printf("\n");
	}
	
	return 1;
}
