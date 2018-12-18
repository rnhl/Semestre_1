#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a = 1;
	int b = 2;
	int c = 3;
	int *p1, *p2;
	p1 = &a;
	p2 = &c;
	*p1 = (*p2)++;
	p1 = p2;
	p2 = &b;
	*p1 -= *p2;
	++ *p2;
	*p1 *= *p2;
	a = ++ *p2 **p1;
	p1 = &a;
	*p2 = *p1/= *p2;
	





	return 0;
}



/* Le pointeur NUL 

La valeur numérique zéro (O) est utilisée pour indiquer qu'un pointeur ne pointe nulle part.
int  *p;
p = 0;

int a;
int *p;
p = &a;

&a désigne l'adresse de a
p désigne l'adresse de a
*p désigne le contenu de a
*/