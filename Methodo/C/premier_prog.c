#include <stdio.h>


int fact(int n){
	if(n == 0){
		return 1;
	}
	else {
		return n * fact(n -1); 
	}
}

int main () {

int x;
printf("entrez n : ");
scanf("%d", &x);

printf("%d! = %d\n", x, fact(x));

return 0;

}