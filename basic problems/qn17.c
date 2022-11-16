// finding odd index sum and even index sum in array
#include <stdio.h>
void main() {
	int odd_sum,even_sum;
	odd_sum = even_sum = 0;
	int numbers[10] = {2,3,4,5,6,7,8,9,1,11};
	for (int i = 0; i < 10; ++i)
	{
		if (i%2==0) {
              even_sum+=numbers[i];
		} else {
			odd_sum+=numbers[i];
		}
	}
	printf("Odd index sum : %d\nEven index sum : %d\n",odd_sum,even_sum);
}