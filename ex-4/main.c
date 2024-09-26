#include <stdlib.h>
#include <stdio.h>

int main()
{
	int input;
	int count = 1;


	printf("Saisir un nombre différent de 0:\n");
	scanf("%d", &input);

	while(count != input + 1)
	{

		if (input == 0)
		{
			printf("Erreur, Saisir un nombre différent de 0\n");
		}
		else if (input != 0)
		{
			printf("%d\n", count);
		}
		count = count + 1;
	}

	exit(0);
}