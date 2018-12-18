#include <stdio.h>


float suite(int n){

float tab[n]; 
tab[0] = 0.5;
tab[1] = 1;

int i; float somme = 0, produit = 1; 

	if(n <= 1){
		if(n == 0){
			return tab[0];
		}
		return tab[1];
	}
	else{
		for(i = 0; i <= n; i++){
		somme += 0.5 * tab[i] + 2 * tab[i-1];			
		}

		printf("Somme suite = %f\n", somme);

		for(i = 0; i <= n; i++){
		produit *= 0.5 * tab[i] + 2 * tab[i-1];	
		}

		printf("Produit suite = %f\n\n", produit);

		for(i = 0; i <= n; i++){
		tab[i+1] *= 0.5 * tab[i] + 2 * tab[i-1];
		printf("U(%d)=%f\n", i, tab[i]);	
		}
	}

	return 0;
}

int main(int argc, char const *argv[]){
	int n; 
	//float valn;

	printf("n: "); scanf("%d", &n);
	
	suite(n);



	return 0;
}