#include <stdio.h>

int puissance(int x, int n);


int main(){

	int x, n;
	printf("nombre ? "); scanf("%d", &x);
	printf("puiss  ? "); scanf("%d", &n);
	printf("%d puiss(%d)=%d\n", x, n, puissance(x,n));

	return 0;
}

int puissance(int x, int n){
	int i;
	/*
	if(n == 0){
		return 1;
		if(n == 1){
			return x;
		}
	}
	else{
		*/
		for(i = 1; n >= 1; n--){
			i *= x;
		}
		return i;
	//}
}