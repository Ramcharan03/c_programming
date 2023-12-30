#include <stdio.h>
int main()
{
int l,b;
printf("Enter length and breadth of rectangle\n");
scanf("%d %d",&l,&b);
if((l*b)>(2*(l+b)))
{
    printf("Area is Greater than perimeter\n");
}
else
{
    printf("Area is not Greater than perimeter\n");
}
return 0;
}