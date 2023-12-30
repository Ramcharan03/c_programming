#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	
	printf("Enter an year : ");
	scanf("%d", &year);
	
	if(year%4 != 0)//not a leap year
		printf("\n\n%d is not a leap ", year);
	else//leap year
		printf("\n\n%d is a leap year.", year);
		
	getch();
	return 0;
}