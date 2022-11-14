// checking two strings are anagram
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int is_anagram(char[],char[]);
void removeSpaces(char[]);
void makeAllLower(char[]);
void deleteSpecific(char[],int);
void main() {
	char first[25],second[25];
   printf("Enter the first string >> ");
   scanf("%[^\n]s",first);
   printf("Enter the second string >> ");
   scanf(" %[^\n]s",second);
   if (is_anagram(first,second)==1) {
   	printf("the given two strings are anagrams\n");
   } else {
   	printf("the given two strings are not anagrams\n");
   }
}
void deleteSpecific(char arr[],int index) {
   for (int i = index; i < strlen(arr); ++i)
   {
   	arr[i] = arr[i+1];
   }
}
void makeAllLower(char string[]) {
	int length = strlen(string);
	for (int i = 0; i < length; ++i)
	{
		string[i] = tolower(string[i]);
	}
}
void removeSpaces(char string[]) {
  int length = strlen(string);
  for (int i = 0; i < length; ++i)
  {
  	if (string[i]==' ') {
        deleteSpecific(string,i);
        i--;
  	}
  }
}
int is_anagram(char string1[],char string2[]) {
	removeSpaces(string1);
	removeSpaces(string2);
	makeAllLower(string1);
	makeAllLower(string2);
	int l1 = strlen(string1);
	int l2 = strlen(string2);
	if (l1!=l2) {
		return 0;
	}
	for (int i = 0; i < l1; ++i)
	{
		int curChar = string1[i];
		int count1 = 0;
		int count2 = 0;
		for (int j = 0; j < l1; ++j)
		 {
		 	if (string1[j]==curChar) {
		 		count1++;
		 	}
		 } 
	    for (int j = 0; j < l1; ++j)
		 {
		 	if (string2[j]==curChar) {
		 		count2++;
		 	}
		 }
		 if (count1 != count2) {
		 	return 0;
		 } 
	}
	return 1;
}