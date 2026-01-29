#include<stdio.h>
#include<conio.h>
int main()
{

        float number = 0.0,cube = 0.0;
        printf("Enter a number:");
        scanf("%f",&number);

        cube = number * number * number;

        printf("The cube of: %.2f * %.2f * %.2f is %.2f\n",number,number,number,cube);

        getch();
        return 0;
}
