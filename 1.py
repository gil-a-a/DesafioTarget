'''
1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre 
será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), 
escreva um programa na linguagem que desejar onde, informado um número, ele calcule a 
sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence 
ou não a sequência. 
'''

def main():	
	N = input("Insira o número para ver se ele pertence à sequência de Fibonacci: ");

	fib = [0, 1];	#inicializa o vetor com os dois primeiros números da sequência

	print("Fibonacci: ");
	while(fib[0] < int(N)):
		print(str(fib[0]) + " ");
		aux = fib[1];
		fib[1] = fib[1] + fib[0];	#calcula o número com base nos dois anteriores
		fib[0] = aux;

	print(fib[0]);

	#verifica se o número faz parte da sequência
	print("\nN: ")
	if (fib[0] == int(N)):
		print(N + " faz parte da sequência\n");
	else:
		print(N + " não faz parte da sequência\n");

if __name__ == '__main__':
	main()
