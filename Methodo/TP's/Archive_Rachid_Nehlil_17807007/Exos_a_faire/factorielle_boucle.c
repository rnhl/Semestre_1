#include <stdio.h>

int factorielle(int n){
	int i = 0, result = 1;
	if(n == 0){
			return result;
		}
	else{
		for(i = 1; i <= n; i++){
			result *= i;
			//printf("!%d = %d", i, result);
		}
		return result;
	}
}

int main(){
	int n = 0;
	printf("Factorielle function\nN ? "); scanf("%d", &n);
	printf("!%d = %d\n", n, factorielle(n));

	return 0;
}