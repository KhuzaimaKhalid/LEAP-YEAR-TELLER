#include<stdio.h>

int main()
{
	printf("\t LEAP YEAR TELLER \n");
	int year;
	printf("\nEnter the Year: ");
	scanf("%d", &year);
	if(year%4 == 0){
		printf("This is a Leap Year\n");
	} else{
		printf("This is not a Leap Year\n");
	}
	
	
	return 0;
}
