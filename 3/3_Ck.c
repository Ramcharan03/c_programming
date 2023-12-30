#include<stdio.h>
int main()
{
    float cen_x,cen_y,rad,x,y,d;
    printf("Enter Center x,y coodinate and radius\n");
    scanf("%f %f %f",&cen_x,&cen_y,&rad);
    printf("Enter coordinates of point\n");
    scanf("%f %f",&x,&y);
    d=sqrt(pow((cen_x-x),2.0)+pow((cen_y-y),2.0));
    if(d<rad)
     {
        printf("Point is inside circle\n");
     }
    else if(d==rad)
 {
        printf("Point is on the circle\n");
 }
 else if(d>rad)
 {
         printf("Point is outside the circle\n");
 }
 return 0;
}