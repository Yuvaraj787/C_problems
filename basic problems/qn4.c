// Finding the Nth term of the series
#include <stdio.h>
#include <math.h>
void main() {
	int A,R,n,res;
	printf("G.P\n");
	printf("A = ");
	scanf("%d",&A);
	printf("R = ");
	scanf("%d",&R);
	printf("n = ");
	scanf("%d",&n);
    res = A*(pow(R,n-1));
    printf("%dth term of the given GP is %d\n",n,res);
}