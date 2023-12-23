#include <stdio.h>
#include <math.h>
int main( ) {
    float wcf,t,v;
    scanf("%f",&t);
    scanf("%f",&v);
    wcf = 35.74 + (0.6251 * t) + (((0.3275 * t) - 35.75) * pow(v , 0.16));
    printf("%0.2f",wcf);
return 0 ;
}