//Boucle for qui fait tourner le programme celsius .c + faire un 2eme prog qui demande la valeur en fahr et la convertit en celsius
// Exo 2 : faire puissance.c avec une boucle

#include <stdio.h>

int main(){
	float celsius;
	int min, max, intervalle;

	min = 0;
	max = 40;
	intervalle = 2;

	printf("Celsius    to   Fahrenheit\n");
	celsius = min;
for(; celsius <= max;){
		printf("%5.0f \t\t %3.1f\n", celsius, 9*celsius/5 + 32);
		celsius = celsius + intervalle;
	}

}

//	return(9 * celsius)/5 + 32;

