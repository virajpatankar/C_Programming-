#include<stdio.h>
#include<conio.h>

int main()

{

        int day = 0;
        printf("\n Enter a day Number (1 to 7):");
        scanf("%d",&day);

        if (day == 1)
        {

                printf("\n Monday");

        }
        else if (day == 2)
        {

                printf("\n Tuesday");

        }
        else if (day == 3)
        {

                printf("\n Wednesday");

        }
        else if (day == 4)
        {

                printf("\n Thursday");

        }
        else if (day == 5)
        {

                 printf("\n Friday");

        }
        else if (day == 6)
        {


                 printtf("\n Saturday");

        }
        else if (day == 7)
        {

                 printf("\n Sunday");

        }
        else
        {

                 printf("\n Tnvalid day number to not find day");

        }
        getch();
        return 0;

}
