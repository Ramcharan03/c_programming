#include<stdio.h>
int main(){
    int salary;
    printf("Enter the basic pay: ");
    scanf("%d",&salary);
    int da,ra;
    da= 0.4*salary;
    ra= 0.2*salary;
    int gross = salary+da+ra;
    printf("Gross salary is: %d",gross);
    return 0;
}