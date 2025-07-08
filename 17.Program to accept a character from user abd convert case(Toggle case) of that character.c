#include<stdio.h>
#include<conio.h>

int main()
{


               char ch = 0;

               printf("Enter a character to Toggle It :");
               scanf("%c",&ch);

               if ((ch >= 'A') && (ch <= 'Z'))
               {
                   ch = ch + 32;

               }
               else if ((ch >='a') && (ch <= 'z'))
               {
                   ch = ch + 32;
               }

               printf("\n\nThe character After Toggle It Becomes : %c",ch);

               getch();
               return 0;

}
