#include <stdio.h>
#define N 10

int main(int argc, char const *argv[])
{
	int tab[N], i, nb = 0;
	for(i = 0; i < N; i++){
		printf("entrez entier :  "); 
		scanf("%d", &tab[i]);
	}
	for(i = 0; i < N; i++){
		if(tab[i] >= 10){
			nb++;
		}
	}
	printf("le nombre d'entiers > ou = à %d est : %d\n", N, nb);
	
	return 0;
}