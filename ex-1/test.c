#include <stdlib.h>
#include <stdio.h>

int	main() {

	int nombre;
	int random = 0;
	
	printf("Devinez le nombre (entre 1 et 300: ");
	scanf("%d", &nombre);

	random = rand() % 300 + 1;

	if(nombre < random){
		printf("Le nombres est plus grand\n");
	}
	else if(nombre > random){
		printf("Le nombre est plus petit\n");
	}
	else (nombre == random){
		printf("bien joué, le nombre est %d\n",random);
	}
	

	exit(0);
}