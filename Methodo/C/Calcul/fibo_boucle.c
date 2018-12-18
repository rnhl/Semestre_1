#include <stdio.h>

int fib(int n){
	if(n <= 2){
		return 1;
	}
	else{
		return fib(n - 2) + fib(n - 1);
	}
}

int main(){
	int n;
	printf("/ Fibo suite /\nN ? "); scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		printf("fib(%d)= %d\n", i, fib(i));
		
	}
	return 0;
}