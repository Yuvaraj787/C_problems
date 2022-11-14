//searching element in the array
#include <stdio.h>
void main() {
	int numbers[10] = {32,45,78,6,2,4,1,6};
	int need;
	printf("Enter the element to search >> ");
	scanf("%d",&need);
	for (int i = 0; i < 10; ++i)
	{
		if (numbers[i]==need) {
			printf("Element %d is found at index : %d\n",need,i);
		}
	}
}