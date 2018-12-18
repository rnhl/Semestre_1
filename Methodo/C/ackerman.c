#include <stdio.h>

int ack(int m, int n){
	//int n, m;
	if(m == 0){
				
				return n+1;
	}
	else{
		if(n == 0){
							return ack(m - 1, 1);}
		else{
			return ack(m - 1, ack(m, n-1));}
	}
}


int main(){
	int n, m;
	printf("Ackerman function\n");
	for(m = 1; m <= 2; m++) for(n = 1; n <= 10; n++){
		printf("ack(%d,%d)=%d\n", m, n, ack(m, n));
	}

	

	return 0;

}