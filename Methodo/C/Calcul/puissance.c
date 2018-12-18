#include <stdio.h>

int puissance(int x, int n);


int main(){

	int x, n;
	printf("nombre ? ");
	scanf("%d", &x);
	printf("puissance ? ");
	scanf("%d", &n);

	printf("%d puiss(%d)=%d\n", x, n, puissance(x,n));

	return 0;
}

int puissance(int x, int n){
	if(n == 0){
		return 1;
		if(n == 1){
			return x;
		}
	}
	else{
		return x * puissance(x, n - 1);
	}
}