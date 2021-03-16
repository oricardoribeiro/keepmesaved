#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct coisas
	{
		int cod_thing;
		char thing[];
	};

	struct coisas t;

	system("reset");

	printf("Qual o código da coisa: ");
	scanf("%d", &t.cod_thing);

	return(0);
}
