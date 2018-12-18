#include <stdio.h>


int tableau2(int T1[], int T2[]);
int main(int argc, char const *argv[])
{

	int T1[10] = {-3, 4, 11, 0, 7, -5, 6, -1, 2, 9};
	int T2[10];
	int i, j;
	for(i=0, j=0; i < 10; i++){
		if(T1[i] > 0)
		{
			T2[j] = T1[i];
			j++;
		}
	}
	
	for(i=0; i <= 10; i++){
		printf("[%d] ", T2[i]);
	}
	return 0;


}

int tableau2(int T1[], int T2[]){

	T1[10]={-3, 4, 11, 0, 7, -5, 6, -1, 2, 9};
	T2[10];
	int i, j;
	for(i=0, j=0; i < 10; i++){
		if(*(T1+i)>0){
			*(T2 + j) = *(T1 + i);
			j++;
		}
	}

	return 0;
}

/* Exercice :

tab désigne l'adresse du premier élément. tab[0]
tab+i désigne l'adresse de tab[i]
*(tab + i) désigne le contenu de l'adresse de tab[i]

Si p = tab alors 
p pointe sur tab[0]
p + i pointe sur tab[i]
*(p + i) pointe sur le contenu de tab[i]




*/