#include <stdio.h>

void demande_tableau(int size){		// Entrée des notes dans tableau
	int i = 0; float tab[size];
	for(i = 1; i <= size; i++){
		printf("Note n°%d ? ",i); scanf("%f", &tab[i]);  
	}
}

void affiche_tableau(int size){		// Affichage des notes saisies
	int i = 0; float tab[size];
	for(i = 1; i <= size; i++){
		printf("[%.2f] ", tab[i]);
	}
	printf("\n");
}

float moyenne_tableau(int size){	// Moyenne exprimée en float
	float result = 0, tab[size];
	int i;
	for(i = 1; i <= size; i++){
		result += tab[i];
	}

	return result/size;				// Somme des notes divisée par nombre de notes
}

int main(int argc, char const *argv[])
{
	int size = 0;
	printf("Nombre de cours ? "); scanf("%d", &size);  	// Nbr de cours = taille du tableau (size)
	demande_tableau(size);
	printf("Tableau des notes\n");
	affiche_tableau(size);
	printf("Moyenne des notes = %.2f\n", moyenne_tableau(size)); // moyenne arrondie à 10^-2

	return 0;
}