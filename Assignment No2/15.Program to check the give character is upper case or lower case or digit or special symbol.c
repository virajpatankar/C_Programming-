#include<stdio.h>
#include<conio.h>


int main()
{


            char ch = 0;
            printf("Enter any character or digit or symbol:\n\n");
            scanf("%c",&ch);


            if ((ch >= 'A') && (ch <= 'Z'))
            {


                   printf("The %c is Alphabet in uppercase.\n",ch);

            }

            else if ((ch >= 'a') && (ch <= 'z'))
            {


                   printf("The %c is Alphabet in lowercase.\n",ch);


             }
             else if ((ch >= '0') && (ch <= '9'))
             {


                   printf("The %c is digit.\n,ch");


             }
             else
             {

                   printf("The %c is symbol.\n",ch);

             }

             getch();
             return 0;

}
