#include<stdio.h>
int main()
{
int weigh;
scanf("%d",&weigh);
if(weigh<115)
printf("Flyweight");
else if(weigh>=115 && weigh<=121)
printf("Bantamweight");
else if(weigh>=122 && weigh<=153)
printf("Featherweight");
else if(weigh>=154 && weigh<=189)
printf("Middleweight");
else
printf("Heavyweight");
return 0;
}