#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char letra = 'a';
	if (toupper(letra) == 'A') // toupper: transforma letra em maiúsculo; tolower: transforma letra em minúsculo; biblioteca: #include <ctype.h>
	{
		printf("%d",letra == letra);
	}
	else
	{
		printf("%d",letra != letra);
	}
	return 1;
}
