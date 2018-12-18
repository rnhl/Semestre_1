#include <stdio.h>

float fahr(float celsius);

int main(){
	float celsius;
	int min, max, intervalle;

	min = 0;
	max = 40;
	intervalle = 2;

	printf("Celsius    to   Fahrenheit\n");
	celsius = min;

	while(celsius <= max){
		printf("%5.0f \t\t %3.1f\n", celsius, fahr(celsius));
		celsius = celsius + intervalle;
	}

}

float fahr(float celsius){
	return (9 * celsius)/5 + 32;
}