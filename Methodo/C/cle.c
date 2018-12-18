#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char nb, nb2, nb3, nb4;
	//int tab[4] = {10, 20, 30, 40};

	printf("Entrez une valeur :"); scanf("%c%c%c%c", &nb, &nb2, &nb3, &nb4); //scanf("%c", &ch2); scanf("%c", &nb3); 


	switch(nb){
		case '1':
			switch(nb2){
				case '0':
					printf("nombre 100\n");
					break;

				default:
					printf("les cas précédents sont faux\n");
					break;
			}
			printf("nombre dans la liste\n");
			break;

		case 'a':
			printf("chaine a\n");
			break;

		case '4':
			switch(nb2){
				case '2':
					printf("nombre dans la liste\n");
					break;
			}
			break;

		default:
			printf("les cas précédents sont faux\n");
			break;

	}

	return 0;
}