#include <stdio.h>

int Ackermann(int M,int N) {
      if(M == 0) return N+1;
      else {
        if(N == 0) return Ackermann(M-1,1);
              else return Ackermann(M-1,(Ackermann(M,N-1)));
      }
    }
 
int main()
{
    int I,J;
    for(I=1;I<=2;I++) for(J=1;J<=10;J++) {
       printf("Ackermann(%i,%i)=%i\n",I,J,Ackermann(I,J));
    }
    return 0;
}