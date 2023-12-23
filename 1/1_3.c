#include<stdio.h>
int main(){
    float marks;
    float agg=0;
    for(int i=0;i<5;i++){
        printf("Enter the marks for subject %d :",i);
        scanf("%f",&marks);
        agg=agg+marks;
    }
    printf("Aggregate marks are: %0.2f \n",agg);
    float p = (agg/500)*100;
    printf("Percentage is: %0.2f \n",p);
}