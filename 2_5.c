#include <stdio.h>
#include <math.h>
int main( ) {
    float D,L1,L2,G1,G2;
    scanf("%f",&L1);
    scanf("%f",&L2);
    scanf("%f",&G1);
    scanf("%f",&G2);
    D = (3963) * acos((sin(L1) * sin(L2) ) + (cos(G1) * cos(G2) * cos(G2 - G1)));
    printf("%0.2f",D);
return 0 ;
}