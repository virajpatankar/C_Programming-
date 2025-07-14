#include<stdio.h>
#include<conio.h>

int main()

{

         int Num = 0;
         printf("\n Enter an integer number to check whether it is even or odd");
         up:
         scanf("%d", & Num);
         if ( Num == 0 )
         {

                printf("\n given number is neutral.\n\n please enter other than zero integer to check it is even or odd");
                goto up;

         }

         if ( Num %2 == 0)
         {

                printf("\n given number is even");

         }
         else
         {

                printf("\n given number is odd");

         }

         getch();
         return 0;

}
