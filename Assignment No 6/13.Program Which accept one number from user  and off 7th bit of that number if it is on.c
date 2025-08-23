#include<stdio.h>
#include<conio.h>
typedef long long int LLI;

LLI OFF_7th_Bit(LLI);


int main()
{

       LLI No = 0,Ret = 0;

       printf("\n Enter a number = ");
       scanf("%d",&No);

       Ret = OFF_7th_Bit(No);

       if(Ret == No)
       {


             printf("\n 7th bit of given number %lld is already OFF.",No);

        }
        else
        {

             printf("\n 7th bit of given number %lld is on,\nAfter 7th Bit OFF Modified number is = %lld.",No,Ret);

        }

        getch();
        return 0;

}
