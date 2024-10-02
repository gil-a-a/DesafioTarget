'''
2) Escreva um programa que verifique, em uma string, a existência da letra ‘a’, 
seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre. 
'''

def main():	
	count = 0;
	string = "a a A A b A c c c a b c";

	for i in string:
		if (i.lower() == 'a'):
			count += 1

	if count == 0:
		print("Não há a letra 'a' na string\n");
	else:
		print("A letra 'a' aparece " + str(count) + " vezes na string");	

if __name__ == '__main__':
	main()