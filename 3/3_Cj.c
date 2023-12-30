#include <stdio.h>
int main()
{
 float x1,y1,x2,y2,x3,y3;
printf("Enter coordinates (x1,y1)\n");
scanf("%f %f",&x1,&y1);
printf("Enter coordinates (x2,y2)\n");
scanf("%f %f",&x2,&y2);
printf("Enter coordinates (x3,y3)\n");
scanf("%f %f",&x3,&y3);
if((y2-y1)/(x2-x1)==(y3-y1)/(x3-x1))
{
    printf("Point lies on straight line");
}
else
{
    printf("Points don't lie on straight line");
}
return 0;
}