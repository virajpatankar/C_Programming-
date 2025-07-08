#include<stdio.h>
#include<conio.h>

int main()
{


         char ch = 0;

         printf("Enter A Division To Check Exam Time :");
         scanf("%c",&ch);

         switch (ch)

          {

               case 'A':

                         printf("\n\nYour Exam at 10 Am..");
                         break;

               case 'a':

                         printf("\n\nYour Exam at 10 AM..");
                         break;

               case 'B':

                         printf("\n\nYour Exam at 10.30 AM..");
                         break;

               case 'b':

                          printf("\n\nYour Exam at 10.30 AM..");
                          break;

                case 'C':


                          printf("\n\nYour Exam at 1 PM..");
                          break;

                 case 'c':

                          printf("\n\nYours Exam at 1 PM..");
                          break;

                 case 'D':

                          printf("\n\nYours Exam at 1.30 PM..");
                          break;

                 case 'd':

                          printf("\n\nYours Exam at 1.30 PM..");
                          break;

                 default:

                          printf("\n\nEnter correct Division..");

          }

          getch();
          return 0;

}
