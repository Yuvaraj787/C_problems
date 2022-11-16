/*Given a street of N houses (a row of houses), each house having K amount of money 
kept inside; now there is a 
thief who is going to steal this money but 
he has a constraint/rule that he cannot steal/rob two adjacent houses. 
Find the maximum money he can rob. */
#include <stdio.h>
void main() {
	int N,K;
	printf("N = ");
	scanf("%d",&N);
	printf("K = ");
	scanf("%d",&K);
	int count = 0;
	for (int i = 0; i < N; ++i)
	{
		if (i%2==0) 			count++;
		}
	}{
{

	printf("The maximum the thief can steel is %d\n",count*K);
}