#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char letra = 'a';
	if (toupper(letra) == 'A') // toupper: transforma letra em mai�sculo; tolower: transforma letra em min�sculo; biblioteca: #include <ctype.h>
	{
		printf("%d",letra == letra);
	}
	else
	{
		printf("%d",letra != letra);
	}
	return 1;
}
