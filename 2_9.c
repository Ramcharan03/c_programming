#include <stdio.h>
#include <math.h>

int main(){
    float c,d,temp;
    printf("Enter number for location C: ");
    scanf("%f",&c);
    printf("Enter number for location D: ");
    scanf("%f",&d);
    temp=c;
    c=d;
    d=c;
    printf("Number in location D is: %0.3f\n",c);
    printf("Number in location D is: %0.3f\n",d);

    return 0;
}