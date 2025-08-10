#include<stdio.h>
#include<conio.h>

int main()
{

       int i = 0, j = 0, R = 0, c = 0;

       printf("Enter a number");
       scanf("%d",&R);
       printf("Enter a number");
       scanf("%d",&c);



       for(i = 1; i<R; i++)
       {

            for(j = 1; j<c; j++)
            {

                printf(" %d ", j);

            }
            printf("\n");

        }
        printf("\n");

        getch();
        return 0;

}
