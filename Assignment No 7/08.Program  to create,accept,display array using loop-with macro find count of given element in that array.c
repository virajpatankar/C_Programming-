#include<stdio.h>
#include<conio.h>
#define ArNo 8

int main()
{


      int i = 0,Arr[ArNo]={}, cnt = 0;

      for(i = 0; i < ArNo; i++)
      {

             printf("Enter value of %d index:",i);
             scanf("%d",&Arr[i]);

       }

       getch();
       printf("\n\n");


       for(i = 0;i < ArNo; i++, cnt++)
       {


            printf("Value od %d index is:%d\n",i,Arr[i]);

       }

       getch();
       return 0;

}
