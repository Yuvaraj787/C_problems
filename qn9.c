#include <stdio.h>
#include <string.h>
void main() {
	char name[25];
	printf("Enter the string >> ");
	scanf("%s",name);
	int total_length = strlen(name);
	int num_of_alphabet = total_length;
	for (int i = 0; i < total_length; ++i)
	{
		int count = 0;
		for (int j = i+1; j < total_length; ++j)
		{
			if (name[i]==name[j]) {
				count++;
			}
		}
		num_of_alphabet = num_of_alphabet - count;
	}
	printf("\nThe given string contains %d")
}