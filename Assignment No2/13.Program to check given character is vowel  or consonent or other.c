#include<stdio.h>
#include<conio.h>

int main()
{

          char ch = '0';
          printf("Enter the character to check:\n\n");
          scanf("%c",&ch);

          if( (ch == 'A') || (ch == 'a') || (ch == 'E') || (ch == 'e') || (ch == 'I') || (ch == 'i') || (ch == 'O') || (ch == 'o') || (ch == 'U') || (ch == 'u') )
          {

                printf("\n\nGiven character is vowel.\n");

          }

          else if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a')&&(ch <= 'Z')))
          {

                printf("\n\nGiven character is consonant.\n");

          }

          else

          {

                printf("Invalid character...");

          }
          getch();
          return 0;

}
