#include <stdio.h>

float multiplie(float x, float y){
	x *= y;
	return x;
}

int divise(int x, int y){
		int r = x, q = 0;
	do{
		r = r - y;
		q++;
	}while(r >= y);

	return q;
}

int divise_rest(int x, int y){
	int r = 0;
	divise(x,y);
	return r;
}

float addition(float x, float y){
	x += y;

	return x;
}

float soustraction(float x, float y){
	x -= y;
	return x;
}

void calc(char mode){
	float x,y;
	switch(mode){
		case '1':
		printf("? "); scanf("%f", &x);
		printf("? "); scanf("%f", &y);
		printf("%.2f + %.2f = %.2f\n",x, y,addition(x,y));
		break;

		case '2':
		printf("? "); scanf("%f", &x);
		printf("? "); scanf("%f", &y);
		printf("%.2f - %.2f = %.2f\n",x, y,soustraction(x,y));
		break;

		case '3':
		printf("? "); scanf("%f", &x);
		printf("? "); scanf("%f", &y);
		printf("%.2f * %.2f = %.2f\n",x, y,multiplie(x,y));
		break;

		case '4':
		printf("? "); scanf("%f", &x);
		printf("? "); scanf("%f", &y);
		printf("%.2f / %.2f = %d\n",x, y,divise(x,y));
		printf("Reste : %d\n",divise_rest(x,y));
		break;

	}
}

int main(int argc, char const *argv[])
{
	char mode = 0;
	printf("\nCALCULATRICE\n-----------\n1 : ADDITION\n2 : SOUSTRACTION\n3 : MULTIPLICATION\n4 : DIVISION\n----------\n\n");
	scanf("%c", &mode);
	calc(mode);

	while(mode != '1' && mode != '2' && mode != '3' && mode != '4'){
		printf("ERROR\n");
		scanf("%c", &mode);
	}

	return 0;
}