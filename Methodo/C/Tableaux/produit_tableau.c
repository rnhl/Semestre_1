#include <stdio.h>


void demande_tableau(int size){			// Entrée tableau
	int i = 0, tab[size];
	for(i = 1; i<= size; i++){
		printf("valeur %d ? ",i); scanf("%d", &tab[i]);
	}
}

void affiche_tableau(int size){			// Affichage du tableau
	int i = 0, tab[size];
	printf("Tableau\n");
	for(i = 1; i <= size; i++){
		printf("[%d] ", tab[i]);
	}
	printf("\n");
}

int produit_tableau(int size){			// Fonction produit qui sort un int
	int i, result = 1, tab[size];
	for(i = 1; i <= size; i++){
		result *= tab[i];
	}

	return result;
}

int main(int argc, char const *argv[])
{
	int size = 0;
	printf("Taille tableau ? "); scanf("%d", &size);
	demande_tableau(size);
	affiche_tableau(size);
	printf("Produit tableau = %d\n", produit_tableau(size));

	return 0;
}