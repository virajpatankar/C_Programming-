#include<stdio.h>
#include<conio.h>

int main()
{

        int ch = 0;
        printf("Enter character from (A to Z)");
        scanf("%d",&ch);

        if ((ch >= 'a') && (ch <= 'z'))
        {

             printf("The given alphabet is true.",ch);


        }
        else
        {

             printf("The given alphabet is false.",ch);


        }
        getch();
        return 0;

}
