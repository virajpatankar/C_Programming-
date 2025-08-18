#include<stdio.h>
#include<conio.h>

int main()
{

         int Num = 0,Result = 0;

         printf("\n Enter a number = ");
         scanf("%d",&Num);

         Result = ~Num;

         printf("\n Result => ~%d = %d.",Num, Result);

         getch();
         return 0;

}
