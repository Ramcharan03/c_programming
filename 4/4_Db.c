   #include<stdio.h>
   int main()
   {
     char character;
     scanf("%c",&character);
     if(character>=65 && character<=90)
     printf("%c is a capital letter",character);
     else if(character>=97 && character<=122)
     printf("%c is a small letter",character);
     else if(character>=48 && character<=57)
     printf("%c is a digit",character);
     else
     printf("%c is a special symbol",character);
     return 0;
}