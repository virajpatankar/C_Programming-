#include<stdio.h>
#include<conio.h>

int main()
{

      int No = 0;

      printf("Enter a number =");
      scanf("%d",&No);

      if((No >> 6)& 1)
      {

           printf("\n 7th bit -");

      }
      if((No >> 7) & 1)
      {

            printf("\n 8th bit -");

      }
      if((No >> 8) & 1)
      {

            printf("\n 9th bit -");

       }
       printf("of given number %d bit is ON",No);

       getch();
       return 0;

}
