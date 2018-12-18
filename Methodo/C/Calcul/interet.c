#include <stdio.h>
float interet_total(float somme,float interet, int nb_mois){
	if(nb_mois){
		return interet_total(somme + somme * interet / 100, interet, nb_mois - 1);		
	}
	return somme;	
}


float interets(float somme,float interet, int nb_mois){
	return (somme * interet * nb_mois) / 100;			
}

int main(){
	float somme, interet; 
	int nb_mois;
	
	printf("entrez somme de départ : "); scanf("%f", &somme);

	printf("entrez nb de mois : "); scanf("%d", &nb_mois);

	printf("entrez taux d'interet : "); scanf("%f", &interet);

	printf("Pour %.2f$ à un taux de %.2f et pour une durée de %d mois, vous aurez : %.2f$\nArgent gagné : %.2f\n", somme, interet, nb_mois, interet_total(somme, interet, nb_mois), interets(somme, interet, nb_mois));
	

	return 0;
}