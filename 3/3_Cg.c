#include<stdio.h>
int main()
{
int angle1,angle2,angle3;
printf("Enter the angles of Triangle in any order in Degrees.\n");
scanf("%d %d %d",&angle1,&angle2,&angle3);
if(angle1+angle2+angle3==180)
{
printf("Triangle is Valid.");
}
else
{
printf("Triangle is Invalid.");
}
return 0;
}