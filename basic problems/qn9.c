#include <stdio.h>
#include <string.h>
void main() {
	char name[25];
	printf("Enter the string >> ");
	scanf("%s",name);
	int count = 0;
	for (int i = 0; i < strlen(name); ++i)
	{
		if (((name[i] <= 122) && (name[i] >= 97))||((name[i]>=65) && (name[i]<=90))) {
         count++;			
		}
	}
	printf("The total no of alphabets used here is %d\n",count);
}