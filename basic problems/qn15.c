// finding the given element found in the given range
#include <stdio.h>
int is_present(int[],int,int,int);
void main() {
    int n,a,b;
    int numbers[10] = {44,5,6,7,8,9,12,32,24,3};
    printf("Enter the element >> ");
    scanf("%d",&n);
    printf("Enter the range separated by spaces >> ");
    scanf("%d %d",&a,&b);
    if (is_present(numbers,n,a,b)==1) {
    	printf("Yes the given element is present in the given range\n");
    } else {
    	printf("No the given element is not present in the given range\n");  
    }
}
int is_present(int arr[],int n,int r1,int r2) {
     int present = 0;
     for (int i = r1; i <= r2; ++i)
     {
     	if (arr[i]==n) {
     		present = 1;
     		break;
     	}
     }
     return present;
}