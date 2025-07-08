#include<stdio.h>
#include<conio.h>

int main()

{

       int Num = 0;
       printf("Enter a Number:\n");
       scanf("%d",&Num);

       if  ( (Num % 7) , (Num % 5) == 0)
       printf(" Number is divisible by 7 & 5");
       else
       printf(" Number is not divisible by 7 & 5");
       getch();
       return 0;

}
