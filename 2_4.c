#include<stdio.h>
#include<math.h>
int main(){
    int x,y;
    printf("Enter the coordinates: ");
    scanf("%d %d",&x,&y);
    float r = sqrt(x*x+ y*y);
    float p = atan(y/x);
    printf("polar coordinates: (%0.2f,%0.2f) \n",r,p);
}