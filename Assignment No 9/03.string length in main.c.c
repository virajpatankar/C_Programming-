#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Sname[20]={'\0'};

    int i=0;

    printf("\n Enter a string to measure its length : ");
    gets(Sname);

    for(i=1;i<=20;i++)
    {

        if(Sname[i] == '\0')
        {
            break;
        }

        i++;
    }
    printf("string length => %d",i);

    getch();
    return 0;
}
