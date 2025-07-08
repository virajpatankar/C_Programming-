#include<stdio.h>
#include<conio.h>

int main()

{

       int Num = 0;
       printf("Enter a Number");
       scanf("%d",&Num);

       if ( Num % 7 == 0)
       {
              printf("Number is divisible by 7");
       }
       else
       {

              printf("Number is Not divisible by 7");

        }
        getch();
        return 0;

}
