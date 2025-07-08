#include<stdio.h>
#include<conio.h>

int main()
{


          int No = 0;

          printf("Enter an Integer Number");
          scanf("%d",&No);

          if ( No > 0 )
          {

                 printf("The given Number %d is positive",No);

           }
           else
           {

                printf("The given Number is negative",No);

           }
           getch();
           return 0;

}
