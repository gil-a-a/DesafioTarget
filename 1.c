#include <stdio.h>

/*
1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre 
será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), 
escreva um programa na linguagem que desejar onde, informado um número, ele calcule a 
sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence 
ou não a sequência. 
*/

int main ()
{
	int N;
	printf("Insira o número para ver se ele pertence à sequência de Fibonacci: ");
	scanf(" %d", &N);

	int fib[2] = {0, 1};	//inicializa o vetor com os dois primeiros números da sequência
	int aux;

	printf("Fibonacci: ");
	while(fib[0] < N){
		printf("%d ", fib[0]);

		aux = fib[1];
		fib[1] = fib[1] + fib[0];	//calcula o número com base nos dois anteriores
		fib[0] = aux;
	}
	printf("%d ", fib[0]);

	//verifica se o número faz parte da sequência
	if (N == fib[0])
		printf("\nN: %d faz parte da sequência\n", N);
	else
		printf("\nN: %d não faz parte da sequência\n", N);

	printf("\n");

	return 0;	
}