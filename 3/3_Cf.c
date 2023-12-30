#include<math.h>
#include<stdio.h>
int main()
{
printf("Enter ages of Ram,Shyam and Ajay.\n");
int age1,age2,age3;
scanf("%d %d %d",&age1,&age2,&age3);
int youngest;
youngest=age1<age2?(age1<age3?age1:age3):(age2<age3?age2:age3);
if(youngest==age1)
{
printf("Ram is Youngest.");
}
else if(youngest==age2)
{
printf("Shyam is Youngest.");
}
else if(youngest==age3)
{
printf("Ajay is Youngest.");
}
return 0;
}