#include<stdio.h>
int main()
{
int x,y,z;
scanf("%d %d %d",&x,&y,&z);
if(x*x+y*y==z*z)
printf("The triangle is right angle");
else if((x==y) && (y==z))
{
printf("\nThe triangle is equilateral");
} 
else if((x==z) && (x!=y) || (y==z) && (y!=x) || (x==y) && (x!=y))
{
printf("\nThe triangle is isoseles");
}
else
{
printf("\nThe triangle is scalene");
}
return 0;
}