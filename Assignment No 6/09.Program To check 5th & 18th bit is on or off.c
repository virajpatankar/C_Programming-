#include<stdio.h>
#include<conio.h>

int main()
{

     int No = 0;

     printf("\n Enter a number =");
     scanf("%d",&No);

     if(((No >> 4) & 1) && ((No >> 17) & 1) )
     {

          printf("\n 5th & 18th bit of given number %d are ON.",No);

      }
      else if((No >> 4)& 1)
      {

          printf("\n for given number %d = 5th bit is ON & 18th bit is off",No);

      }
      else if((No >> 17) & 1)
      {

          printf("\n for given number %d = 5th bit is OFF & 18th bit is ON.",No);

      }
      else
      {

           printf("\n both 5th & 18th bit are given number %d is OFF.",No);

      }

      getch();
      return 0;

}
