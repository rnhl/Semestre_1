#include <stdio.h>

float cel_to_fahr(float celsius){
	return (9 * celsius)/5 + 32;
}

float fahr_to_cel(float fahr){
	return (fahr - 32)/1.8;
}

void menu(char nb){	
	printf("\nChoisir conversion :\n(1)Celsius -> Fahrenheit\n(2)Fahrenheit -> Celsius\nPress q to quit\n\n: ");
}

int main(){
	float celsius, fahr; char nb;
	menu(nb);
	nb = getchar();
	
	while(nb != '1' && nb != '2' && nb != 'q'){
		printf("\nERREUR\n(1) (2) ou q to quit\n: ");
		nb = getchar();
	}

	switch(nb){
		case '1':
			printf("Entrez temperature (°C)\n? "); scanf("%f", &celsius);
			printf("\n%5.0f°C = %3.1f°F\n", celsius, cel_to_fahr(celsius));
			break;
		
		case '2':
			printf("Entrez temperature (°F)\n? "); scanf("%f", &fahr);
			printf("\n%3.1f°F = %5.0f°C\n", fahr, fahr_to_cel(fahr));
			break;
		
		case 'q':
			printf("Goodbye :-)\n");
			break;
		
	}

	return 0;
}

