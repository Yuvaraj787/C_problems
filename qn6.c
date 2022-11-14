#include<stdio.h>
#include<math.h>
int is_armstrong(int);

void main() {
  int number;
  printf("Enter the number >> ");
  scanf("%d",&number);
  if (is_armstrong(number)==1) {
  	printf("Given number is a armstrong number\n");
  } else  {
  	printf("Given number is not a armstrong number\n");
  }
}

int is_armstrong(int num) {
int tot = 0;
int length = 0;
int check = num;
int temp = num;
while (temp != 0) {
  temp = temp/10;
  length++;
}
for (int i = 0; i < length; ++i)
{
	int rem = num%10;
	tot += pow(rem,length);
	num = num/10;
}
if (check == tot) {
	return 1;
} else {
	return 0;
}
}