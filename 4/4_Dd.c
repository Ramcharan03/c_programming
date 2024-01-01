#include<stdio.h>
int main()
{
int s1,s2,s3,largest;
scanf("%d %d %d",&s1,&s2,&s3);
if(s1>s2 && s1>s3)
largest=s1;
else if(s2>s1 && s2>s3)
largest=s2;
else
largest=s3;
if((s1+s2)>largest|| (s2+s3)>largest || (s1+s3)>largest)
printf("Triangle is valid");
else 
printf("Triangle is not valid");
return 0;
}