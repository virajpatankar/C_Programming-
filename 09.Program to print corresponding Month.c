#include<stdio.h>
#include<conio.h>


int main()

{

         int Month = 0;
         printf("Enter a Month number (1 to 12):");
         scanf("%d",&Month);

         if (Month == 1)
         {

                 printf("\n Januvary");

         }
         else if (Month == 2)
         {

                 printf("\n Feburvary");


         }
         else if (Month == 3)
         {


                 printf("\n March");

         }
         else if (Month == 4)
         {


                 printf("\n April");

         }
         else if (Month == 5)
         {

                 printf("\n May");

         }
         else if (Month == 6)
         {

                 printf("\n June");

         }
         else if (Month == 7)
         {


                 printf("\n July");

         }
         else if (Month == 8)
         {

                 printf("\n August");

         }
         else if (Month == 9)
         {

                 printf("\n September");

         }
         else if (Month == 10)
         {

                 printf("\n October");

          }
          else if (Month == 11)
          {

                 printf("\n November");

          }
          else if (Month == 12)
          {

                 printf("\n December");

          }
          else
          {

                  printf("\n Invalid Month number");

          }
          getch();
          return 0;

}
