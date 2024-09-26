#include <stdlib.h>
#include <stdio.h>

int main()
{
	char input;

	printf("Choisir le symbole d'opération: + - / * %%\n");
	scanf("%c", &input);

	if (input == '+'){
		printf("l'opération est une addition\n");
	}
	else if(input == '-'){
		printf("l'opération est une soustraction\n");
	}
	
	else if(input == '/'){
		printf("l'opération est une division\n");
	}
	
	else if(input == '*'){
		printf("l'opération est une multiplication\n");
	}
	else if(input == '%'){
		printf("l'opération est un modulo\n");
	}
	else{
		printf("Erreur, ce n'est pas une opération\n");
	}


	exit(0);

}