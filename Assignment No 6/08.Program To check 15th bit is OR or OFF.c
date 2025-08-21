#include<stdio.h>
#include<conio.h>

int main()
{

     int No = 0;



     printf("\n Enter The Number =");
     scanf("%d",&No);

     if((No >> 14) & 1)
     {

           printf("\n Given Number %d of 15th bit is ON",No);

     }
     else
     {

           printf("\n Given number %d of 15th bit is OFF",No);

     }

     getch();
     return 0;

}
