#include<stdio.h>
#include<conio.h>
int main()
{
    char ch1 = '\0', ch2 = '\0';

    printf("\n Enter Start Point : ");
    scanf(" %c",&ch1);
    printf("\n Enter End Point : ");
    scanf(" %c",&ch2);

    if (ch1<ch2)
    {
            while( ch1 <= ch2 )
        {
            printf("\n %c",ch1);
            ch1++;
        }
    }
    else
    {
         while( ch1 >= ch2 )
        {
            printf("\n %c",ch1);
            ch1--;
        }
    }

    getch();
    return 0;
}

