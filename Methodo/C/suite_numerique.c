#include <stdio.h>

float suite(int n){

float tab[n]; 
tab[0] = 0.5;
tab[1] = 1;

int i;

	if(n <= 1){
		if(n == 0){
			return tab[0];
		}
		return tab[1];
	}
	else{
		for(i = 1; i <= n; i++){
		tab[i+1] = 0.5 * tab[i] + 2 * tab[i-1];
		printf("%f\n", tab[i]);
			
		}
	}
	return 0;
}

float somme_suite(int n){

float tab[n]; 
tab[0] = 0.5;
tab[1] = 1;

int i; //float somme = 0;

	if(n == 0){
		return tab[0];
	}
	else{
		if(n == 1){
			return tab[0] + tab[1];
		}
		else{

		for(i = 0; i <= n; i++){
		tab[i+1] += (0.5 * tab[i] + 2 * tab[i-1]);
		//printf("%f\n", somme);
			
		}
		return tab[n];
		}
	}
	return 0;
}


int main(int argc, char const *argv[]){
	int n;
	printf("n: "); scanf("%d", &n);
	
	suite(n);
	printf("\n");
	printf("%f\n", somme_suite(n));

	return 0;
}

// Un+1 = 0.5 * Un + 2 * Un-1

// U2 = 0.5 * 1 + 2 * 0.5 = 1.5
// U3 = 0.5 * 1.5 + 2 * 1 = 2.75
// U4 = 0.5 * 2.75 + 2 * 1.5 = 4.38
// U5 = 0.5 * 4.38 + 2 * 2.75 = 