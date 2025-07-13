#include<stdio.h>
#include<conio.h>

int main()

{

          int No = 0, Num1 = 0 , Num2 = 0;
          printf("Enter a Number");
          scanf("%d%d",&Num1,&Num2);

          if ( Num1 > Num2)
          {

                printf("The %d  is Maximum",Num1);

           }
           else
           {

                 printf("The %d  is Minimum",Num2);

           }

           getch();
           return 0;

}
