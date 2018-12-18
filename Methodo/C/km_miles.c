#include <stdio.h>
//#include <string.h>



float convert_miles(float km){
	float miles = km / 1.609;
	return miles;
}

float convert_km(float miles){
	float km = miles * 1.609;
	return km;
}

void menu(char nb){	
	float km, miles;

	switch(nb){

		case '1':
			printf("Entrez nb (km)\n? "); scanf("%f", &km);
			printf("\n%.2f km = %.2f miles\n", km, convert_miles(km));
			break;
		
		case '2':
			printf("Entrez nb (miles)\n? "); scanf("%f", &miles);
			printf("\n%.2f miles = %.2f km\n", miles, convert_km(miles));
			break;
		
		case 'q':
			printf("Goodbye :-)\n");
			break;
	}
}

void error(char nb){
	
	printf("\nERREUR\n(1) (2) ou (3) to quit\n: ");
	scanf("%c", &nb);
}

int main(){
	char nb = 0;

	printf("\nChoisir conversion :\n(1)KM -> Miles\n(2)Miles -> KM\nPress q to quit\n\n: ");
	scanf("%c", &nb);

	while(nb != "1" && nb != "2" && nb != "q"){
		error(nb); }
	
	menu(nb);
	
	return 0;
}
