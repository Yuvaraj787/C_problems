// finding the second largest number
#include <stdio.h>
void main() {
      int array[5] = {55,87,12,87,90};
      int sec_largest = 0;
      for (int i = 0; i < 5; ++i)
      {
      	int count = 0;
      	for (int j = 0; j < 5; ++j)
      	{
      		if (array[i]>=array[j]) {
      			count++;
      		}
      	}
      	if (count == 4) {
      		printf("Second largest number in the given array is %d\n",array[i]);
      		break;
      	}
      }
}