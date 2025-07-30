#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, No = 0, Sum = 0;

    for(i = 1; i <= 10; i++)
    {
        printf("Enter Number %d : ",i);
        scanf("%d",&No);
    }

    for(i = 1; i <= 10; i++)
    {
        Sum = Sum + No;
    }

    printf("\n\nSum of Entered Number Is => %d",Sum);

    getch();
    return 0;
}

