// finding number of days in the given month and year
#include<stdio.h>
int is_leap_year(int);
void main() {
  int year,month;
  printf("Enter the year >> ");
  scanf("%d",&year);
  printf("enter the month in number >> (eg. 1 for january) : ");
  scanf("%d",&month);
  if ((is_leap_year(year)==1)&&(month==2)) {
     printf("\n29 days\n");
  } else {
  	if (month == 2) {
  		printf("\n28 days\n");
  	} else {
  		if (month <= 7) { 
  			if (month%2==0) {
  			printf("\n30 days\n");
  		    } else {
  		    printf("\n31 days\n");
  		    }
  		} else {
  			if (month%2==0) {
  				printf("\n31 days\n");
  			} else {
  				printf("\n30 days\n");
  			}
  		}
  	}
  }
}
int is_leap_year(int year) {
	if (year % 4 == 0) {
		if ((year % 100 == 0) && (year % 400 != 0)) {
			return 0;
		} else {
			return 1;
		}
	} else {
		return 0;
	}
}