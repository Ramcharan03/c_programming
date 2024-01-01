#include<stdio.h>
int main()
{
float sal;
printf("Enter the salary");
scanf("%d",&sal);
sal>=25000 && sal<=40000?printf("Manager\n"):(sal>=15000 && sal<25000?printf("Accountant\n"):printf("Clerk"));
return 0;
}