// reverse a number 
#include <stdio.h>
void reverse(int *);
void main() {
  int number;
  printf("Enter the number >> ");
  scanf("%d",&number);
  reverse(&number);
  printf("The reverse number is %d\n",number);
}
void reverse(int * numberAddress) {
  int num = *numberAddress;
  int rev = 0;
  while (num!=0) {
   int rem = num % 10;
   rev = (rev*10)+rem;
   num = num / 10;
  }
  *numberAddress = rev;
}