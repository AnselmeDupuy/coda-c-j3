#include <stdlib.h>
#include <stdio.h>

int main()
{
	char input[20];
	int count = 1;

	printf("ecrivez une phrase:\n");
	scanf("%s", input);

	while (count <= 5){
		printf("%d : %s\n",count, input);
		count = count + 1;
	
	}
	exit(0);
}