#include <stdio.h>

int main(){
    int al[10];
    int ab[10];

    al[0] = 1189;
    ab[0] = 841;

    for(int i=1; i <= 8; i++){
        al[i] = ab[i-1];
        ab[i] = al[i-1]/2;
        printf("Dimensions of A %d is %d x %d \n", i, al[i], ab[i]);
    }
}
