#include <stdio.h>
void main() {
	int day,tot_fine;
	tot_fine = 0;
	printf("day = ");
    scanf("%d",&day);
    int cars[] = {1432,1231,5471,3211,9876};
    int fine[] = {320,870,1000,500,200};
    for (int i = 0; i < 5; ++i)
    {
    	if (day % 2 == 0) {
    		if (cars[i]%2!=0) {
               tot_fine+=fine[i]; 
    		}
    	} else {
    		if (cars[i]%2==0) {
    			tot_fine+=fine[i];
    		}
    	}
    }
    printf("The total fine is %d\n",tot_fine);
}