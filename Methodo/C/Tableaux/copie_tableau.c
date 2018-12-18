#include <stdio.h>

void demande_tableau(int size, int T1[size], int T2[size]){		// Entrée du tableau 1
	int i = 0;
	for(i = 1; i <= size; i++){
		printf("Valeur %d ? ", i); scanf("%d", &T1[i]);
	}
}

void copie_tableau(int size, int T1[size], int T2[size]){ 
	int i = 0;
	for(i = 1; i <= size; i++){
		T2[i] = T1[i];						// A chaque rang i T2 prend le contenu de la case de T1
	}
}

void affiche_tableau(int size, int T1[size], int T2[size]){ // Affichage des deux tableaux à la suite
	int i = 0;

	printf("\nTableau 1\n");
	for(i = 1; i <= size; i++){
		printf("[%d] ", T1[i]);
	}
	printf("\nTableau 2\n");
	for(i = 1; i <= size; i++){
		printf("[%d] ", T2[i]);
	}
	
	printf("\n");
}

int main(int argc, char const *argv[])
{
	int size = 0;
	printf("Taille tableau ? "); scanf("%d", &size);	
	int T1[size], T2[size];								// size définie on peut initialiser les tableaux

	demande_tableau(size, T1, T2);
	copie_tableau(size, T1, T2);
	affiche_tableau(size, T1, T2);
	return 0;
}