// finding the single element in the given array
#include <stdio.h>
void main() {
   int elements[7] = {33,33,1,2,8,1,2};
   for (int i = 0; i < 7; ++i)
   {
   	  int count = 0;
      for (int j = 0; j < 7; ++j)
      {
      	if (elements[i]==elements[j]) {
      		count++;
      	}
      }
      if (count == 1) {
      	printf("The single element in the given array is %d\n",elements[i]);
      }
   }
}