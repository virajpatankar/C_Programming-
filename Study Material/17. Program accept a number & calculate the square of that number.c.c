#include<stdio.h>
#include<conio.h>
int main()
{

           float number = 0,square = 0;

           printf(" Enter a number:");
           scanf("%f",& number);

           square =  number * number;

           printf(" The square of: %.2f * %.2f  is %.2f\n",number,number,square);


           getch();
}

