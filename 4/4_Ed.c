#include<stdio.h>
#include<math.h>
int main()
{
float theta;
printf("Enter angle in degrees\n");
scanf("%f",&theta);
theta=0.0174533*theta;
if((sin(theta)*sin(theta)+cos(theta)*cos(theta))==1)
{
    printf("\"sin^2+cos^2=1\" is true");
}
else
{
    printf("\"sin^2+cos^2=1\" is not true");
}

return 0;
}