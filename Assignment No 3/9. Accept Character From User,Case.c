
#include<stdio.h>
#include<conio.h>

int main()
{
    char i = '/0', ch = '/0';

    printf("Enter Character:");
    scanf("%c",&ch);


    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(i = 'ch'; ch <= 'Z'; ch++)
        {
            printf("%c ",ch);
        }
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(i = 'ch'; ch >= 'a'; ch--)
        {
            printf("%c ",ch);
        }
    }
    else
    {
        printf("Default Character....");
    }

    getch();
    return 0;
}
