#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{

            double number,squareroot;
            printf("Enter a number:");
            scanf("%f",& number);
            if(number>=0)
            squareroot=sqrt(number);
            printf(" the squareroot of %2f is %2f\n",number,squareroot);
            getch();
}
