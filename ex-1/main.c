#include <stdlib.h>
#include <stdio.h>

int	main() {

	int nombre, rand;
	
	printf("Inserer un nombre: \n");
	scanf("%d", &nombre);

	if ( nombre < 42){
		printf("%d est inférieur à 42\n", nombre);
	}
	else if (nombre == 42){
		printf("%d est égale à 42\n", nombre);
	}
	else if (nombre > 42){
		printf("%d est supérieur à 42\n", nombre);
	}
	

	exit(0);
}