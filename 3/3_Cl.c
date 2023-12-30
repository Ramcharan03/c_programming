#include<stdio.h>
#include<conio.h>
int main()
{
float x,y;

printf("Enter the x-y coordinates of the point : ");
scanf("%f%f", &x,&y);

if(x==0 && y==0)
	printf("\n\nThe point is on the origin.");
if(x==0 && y!=0)
	printf("\n\nThe point lie on the y-axis");
if(x!=0 && y==0)
	printf("\n\nThe points lie on the x-axis");
if(x!=0 && y!=0)
	printf("\n\nThe points lie on the plane");

getch();
return 0;
}