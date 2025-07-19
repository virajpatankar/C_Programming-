#include<stdio.h>
#include<conio.h>

int main()

{

       char c = 0;
       printf("Enter a character:");
       scanf("%c",&c);
       if( c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U' )
       {

               printf("The character %c is a vowel",c);

        }
        else
        {

               printf("The character %c is not a vowel",c);

        }
        getch();

}
