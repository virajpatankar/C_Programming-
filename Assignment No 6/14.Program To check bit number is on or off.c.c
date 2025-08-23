#include<stdio.h>
#include<conio.h>

int main()
{

        int No = 0,Bit  = 0;

         printf("Enter a Number");
         scanf("%d",&No);

         printf("Enter a Bit Number To Check");
         scanf("%d",&Bit);

         if((No >> (Bit - 1) & 1))

         {

               printf("%d Number is on");

          }
          else
          {

                printf("%d Number is off");

           }

           getch();
           return 0;

}
