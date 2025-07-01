#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int main()
{

         printf("ASCII Table(0-127\n");
         printf("------------------\n");
         for(int i=0;i<=127;i++)
         {
            printf("ASCII Value %d:'%c'\n",i,i);
         }
         getch();
}

