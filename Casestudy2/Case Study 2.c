#include<stdio.h>
#include<conio.h>

void Addition();
void Subtraction();
void Multiply();
void Division();
void Remainder();

void main()
{

     int choice = 0;
     char ch = '\0';

     while(1)
     {

          printf("\n\t\t******CALCULATOR******");

          printf("\n\n==================================================================================\n\n");
          printf("\n\n\tEnter A Number From Given Choice =>");
          printf("\n\tPress 1 For Addition");
          printf("\n\tPress 2 For Substraction");
          printf("\n\tPress 3 For Multiplication");
          printf("\n\tPress 4 For Division");
          printf("\n\tPress 5 For Remainder");
          printf("\n\tPress 6 For Exit..");
          printf("\n\n===================================================================================\n\n");

          printf("\n\tEnter A Number do you have to enter => ");
          scanf("%d",&choice);

          switch (choice)
          {

               case 1:

                     Addition();
                     getch();
                     systen("cls");
                     break;

                case 2:

                     Substraction();
                     getch();
                     systen("cls");
                     break;

                case 3:

                     Multiply();
                     getch();
                     system("cls");
                     break;

                case 4:

                     Division();
                     getch();
                     system("cls");
                     break;

                case 5:

                      Remainder();
                      getch();
                      system("cls");
                      break;

                case 6:

                      printf("\n\n\tDo You Want To Exit In This Application>>(Yes/No): ");
                      fflush(stdin);
                      ch = getchar();
                      if((ch == 'Y')||(ch == 'Y'))

                      {

                          system("cls");
                          goto  DWN;

                      }

                      getch();
                      system("cls");
                      break;


                default:

                       printf("\n\n\tInvalid Credentials....\n\npress Enter Go To Back....");
                       printf("\n\n=====================================================\n\n");
                       getch();
                       system("cls");
          }

     }

     DWN:

         printf("\n\n===========================================================\n\n");
         printf("\*********** Thanks To Use Calculator *************");
         printf("\n\n============================================================\n\n");

   getch();
   return 0;

}

