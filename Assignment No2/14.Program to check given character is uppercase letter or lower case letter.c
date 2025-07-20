#include<stdio.h>
#include<conio.h>

int main()
{


         char ch = 0;
         printf("\n Enter character to convert it to upper or lower:");
         scanf("%c",&ch);

         if (ch >= 'A' && ch <= 'Z')
         {


              printf("\n Given letter %c in uppercase = %c"),ch, (ch + 32);


         }
         else
         {


              printf("\n Given letter %c in lowercase = %c"),ch, (ch - 32);


          }

          getch();
          return 0;

}
