#include <stdio.h>

int factorielle(int n){
	int result = 1;
	if(n == 0){
			return result;
		}
	else{
		return n * factorielle(n-1);
	}
}

int main(){
	int n = 0;
	printf("Factorielle function\nN ? "); scanf("%d", &n);
	printf("!%d = %d\n", n, factorielle(n));

	return 0;
}