#include<stdio.h>
int main(){
    float dist;
    printf("Enter the distance(in km):");
    scanf("%f",&dist);
    float m,in,ft,cm;
    m=dist*1000;
    cm=m*100;
    in=cm/2.5;
    ft=in/12;
    printf("Distance in meters: %0.2f \n",m);
    printf("Distance in cm: %0.2f \n",cm);
    printf("Distance in inches: %0.2f \n",in);
    printf("Distance in feet: %0.2f \n",ft);
}