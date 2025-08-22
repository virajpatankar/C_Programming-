#include<stdio.h>
#include<conio.h>
typedef long long int LLI;

int main()
{

       LLI No = 0;

       printf("\n Enter a number=");
       scanf("%d",&No);


       if((No &1) && ((No >> 31) & 1))
       {

            printf("\n both 1st bit and 32 bit is 0n");

        }
        else if(No & 1)
        {

            printf("\n 1st bit is on, Last bit is OFF");

        }
        else if((No >> 31) & 1)
        {

             printf("\n 32 bit is on, 1st bit is OFF");

        }
        else
        {

             printf("\n Both bits are OFF");

        }

        getch();
        return 0;

}

