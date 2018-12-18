#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int choix;

	printf("--Menu--\n\n");
	printf("1. Menu Indien\n");
	printf("2. Menu Viet\n");
	printf("3. Menu Italien\n");
	printf("4. Menu Algérien\n");
	printf("\n Votre choix ?\n");

	scanf("%d", &choix);

	switch(choix){
		case 1:
		printf("Vous choisi Indien.\n");
		break;

		case 2:
		printf("Vous avez choisi Viet\n");
		break;

		case 3:
		printf("Vous avez choisi Italien\n");
		break;

		case 4:
		printf("Vous avez choisi Algérien\n");
		break;

		default:
		printf("Vous n'avez rien choisi...\n");
		break;
	}

	return 0;
}