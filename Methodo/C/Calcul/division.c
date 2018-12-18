#include <stdio.h>

int quotient(int a, int b){
	int r = a, q = 0;

	do{
		r = r - b;
		q++;
	}while(r >= b);

	return q;
}

int reste(int a, int b){
	int r;

	quotient(a,b);   // seconde fonction qui appelle la premiere pour return le reste 
	
	return r;
}

int main()
{
	int a, b;

	printf("a ?"); scanf("%d", &a);
	printf("b ?"); scanf("%d", &b);

	printf("%d / %d = %d. reste : %d\n", a, b, quotient(a,b), reste(a,b));

	return 0;
}
