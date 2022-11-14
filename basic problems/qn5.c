#include<stdio.h>
#include <string.h>
int is_palindrome(char[]);
void main() {
  char string[20];
  printf("Enter the string >> ");
  scanf("%s",string);
  if (is_palindrome(string)==1) {
  	printf("The Entered string is palindrome\n");
  } else {
  	printf("The Entered string is not palindrome\n");
  } 
}
int is_palindrome(char exp[]) {
  int length = strlen(exp);
  char rev[20];
  int count = 0;
  for (int i = length - 1; i >= 0 ; i--)
  {
  	rev[count] = exp[i];
  	count++;
  }
  if (strcmp(exp,rev)==0) {
  	return 1;
  } else {
  	return 0;
  }
}