#include <stdio.h>
#include <math.h>
int main( ) {
    float C,D,temp;
    scanf("%f",&C);
    scanf("%f",&D);
    temp = C;
    C = D;
    D = temp;

    printf("%0.2f,%0.2f\n",C,D);
return 0 ;
}