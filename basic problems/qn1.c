// checking triangle
#include <stdio.h>
void checkTrianlge(int,int,int);
void main() {
   int s1,s2,s3;
   printf("Enter the sides of the traingle >> ");
   scanf("%d %d %d",&s1,&s2,&s3);
   checkTrianlge(s1,s2,s3);
}
void checkTrianlge(int side1,int side2,int side3) {
	if ((side1==side2) && (side1==side3)) {
		printf("\nEquilateral traingle\n");
	} else if ((side1 == side2) || (side1 == side3) || (side2 == side3)) {
		printf("\nIsoceles Triangle\n");
	} else {
		printf("\nScalene Trianlge\n");
	}
}
