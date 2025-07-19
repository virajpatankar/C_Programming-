#include<stdio.h>
#include<conio.h>

int main()

{

        int year;
        printf("Enter a year:");
        scanf("%d",&year);

        if (year % 4 == 0)
        {

             printf("year %d is a leap year",year);


        }
        else
        {

             printf("year %d is not a leap year",year);


        }
        getch();
        return 0;

}
