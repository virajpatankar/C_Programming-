#include<stdio.h>
#include<conio.h>

int main()
{


      int No = 0;

      printf("Enter a number -");
      scanf("%d",&No);

      if((No >> 6) & 1)
      {

           printf("\n 7th bit -");

      }

      if((No >> 14) & 1)
      {

           printf("\n 15th bit -");

       }

       if((No >> 20) & 1)
       {

           printf("\n 21th bit -");

       }

       if((No >> 27) & 1)
       {

           printf("\n 28th bit -");

       }

       printf("of given number %d bit is ON",No);

       getch();
       return 0;

}
