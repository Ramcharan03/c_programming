     #include<stdio.h>
     int main()
     {
       int hard,tensile;
       float carbon;
       scanf("%d",&hard);
       scanf("%f",&carbon);
       scanf("%d",&tensile);
       if(hard>50 && carbon<0.7 && tensile>5600)
       printf("Grade is 10");
       else if(hard>50 && carbon<0.7 && tensile<=5600)
       printf("Grade is 9");
       else if(hard<=50 && carbon<0.7 && tensile>5600)
       printf("Grade is 8");
       else if(hard>50 && carbon>=0.7 && tensile>5600)
       printf("Grade is 7");
       else 
   if(hard>50 && carbon>=0.7 && tensile<=5600 || hard<=50 && carbon<0.7
   && tensile<=5600 || hard<=50 && carbon>=0.7          &&tensile>5600)
      printf("Grade is 6");
      else
      printf("Grade is 5");
      return 0;
      }