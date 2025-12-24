#include<stdio.h>
#include<conio.h>

void fun();

int main()
{

           printf("\n Hiii");
           getch();

           fun();
           return 0;

}

void fun()
{

            int i = 0;

            i++;

            printf("\n fun() Functions Call No = %d",i);
            getch();

            fun();

}
