#include<stdio.h>
#include<conio.h>

int main()
{
    int Sp = 0, Ep = 0, Row = 0, Col = 0;

    printf("Enter Starting Point=> ");
    scanf("%d",&Sp);
    printf("Enter End Point=> ");
    scanf("%d",&Ep);

    printf("\n\nThe Table in Range  %d to %d is:\n\n",Sp,Ep);
    printf("================================================\n");

    if(Sp < Ep)
    {
        for(Row = 1; Row <= 10; Row++)
        {
            for(Col = Sp; Col <= Ep; Col++)
            {
                Row * Col;
                printf("%4d",Row*Col);
            }
            printf("\n");
        }
    }
    else
    {
        for(Row = 1; Row <= 10; Row++)
        {
            for(Col = Sp; Col >= Ep;Col--)
            {
                Row * Col;
                printf("%4d",Row*Col);
            }
            printf("\n");
        }
    }


    printf("================================================");

    getch();
    return 0;
}

