// reversing the array
#include <stdio.h>
void display(int[]);
void reverse(int[]);
void main() {
	int arr[10] = {22,2,4,5,1,23,3,4,5,6};
	// displaying before reversing
	display(arr);
	printf("---reversing---\n");
	//reversing the array
    reverse(arr);
    //displaying after reversing
    display(arr);
}
void display(int arr[]) {
    for (int i = 0; i < 10; ++i)
    	{
    		printf("%d ",arr[i]);
    	}	
    	printf("\n");
}
void reverse(int arr[]) {
	for (int i = 0; i < 5; ++i)
	{
		int temp = arr[9-i];
		arr[9-i] = arr[i];
		arr[i] = temp;
	}
}