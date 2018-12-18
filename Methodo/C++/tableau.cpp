#include <iostream>
const int N = 10;

int main()
{
	int tab[N], i, nb = 0;
	for(i = 0; i < N; i++){
		std :: cout << "entrez entier : ";
		std :: cin >> tab[i];
	}
	for(i = 0; i < N; i++){
		if(tab[i] >= 10){
			nb++;
		}
	}
	std :: cout << "le nombre d'entiers supérieurs ou égal à "<< i <<" est : " << nb << std :: endl;
	
	return 0;
}