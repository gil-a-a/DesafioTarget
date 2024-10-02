#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
2) Escreva um programa que verifique, em uma string, a existência da letra ‘a’, 
seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre. 
*/

#define STR_MAX 150

int main ()
{
	int count = 0;
	char string[STR_MAX] = "a a A A b A c c c a b c";

	for (int i = 0; i < strlen(string); i++){
		if (tolower(string[i]) == 'a')
			count++;
	}

	if (count == 0)
		printf("Não há a letra 'a' na string\n");
	else
		printf("A lestra 'a' aparece %d vezes na string\n", count);

	return 0;	
}