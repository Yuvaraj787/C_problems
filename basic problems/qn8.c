#include <stdio.h>
int Fibonacci(int);
void main() {
    int num;
    printf("Enter the no of fibonacci terms to be printed >> ");
    scanf("%d",&num);
    int series[num];
    for (int i = 1; i <= num; ++i)
    {
    	if (i <= 2) {
    		series[i] = 1;
    	} else {
    		series[i] = series[i-1] + series[i-2];
    	}
    	printf("%d  ",series[i]);
    }
    printf("\n");
}   

int Fibonacci(int count) {
  if (count == 1) {
  	return 1;
  } else if (count == 2) {
  	return 1;
  } else {
  	return (Fibonacci(count-1) + Fibonacci(count-2));
  }
}