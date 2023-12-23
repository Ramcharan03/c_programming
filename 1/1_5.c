#include<stdio.h>
int main(){
    int l,b,r;
    printf("Enter the length,bredth and radius: ");
    scanf("%d %d %d",&l,&b,&r);
    int a = l*b;
    int p= 2*(l+b);
    float ca= 3.14*r*r;
    float cm=2*3.14*r;
    printf("Area of rectangle is: %d \n",a);
    printf("Perimeter of rectangle is: %d \n",p);
    printf("Area of circle is: %0.2f \n",ca);
    printf("Area of rectangle is: %0.2f \n",cm);
}