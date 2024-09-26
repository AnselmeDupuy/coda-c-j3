#include <stdlib.h>
#include <stdio.h>

int main()
{
	int count = 0;
	int nombre = 0;
	char symbole;

	printf("Choissisez un symbole + ou -: \n");
	scanf("%c", &symbole);

	if ((symbole != '+')&&(symbole != '-'))
	{
		printf("Mauvais symbole, choissisez + ou -\n");
	}
	else
	{
		printf("choissisez un nombre différent de 0: \n");
		scanf("%d", &nombre);

		if (symbole == '+')
		{
			while(count <= nombre)
			{
				printf("%d\n", count);
				count = count +1;
			}
		}
		else if (symbole == '-')
		{
			while(nombre >= 0)
			{
				printf("%d\n",  nombre);
				nombre = nombre - 1;
			}
		}
		else
		{
			printf("Erreur Fin");
		}
	}

	exit(0);
}