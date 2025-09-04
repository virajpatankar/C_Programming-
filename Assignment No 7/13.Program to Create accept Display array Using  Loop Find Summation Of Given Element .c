#include<stdio.h>
#include<conio.h>

int main()
{


         int Arr[7]={}, i = 0, sum = 0;

         for(i = 0; i < 7; i++)
         {


             printf("Enter value of %d Element:",i+1);
             scanf("%d",&Arr[i]);

          }

          getch();
          printf("\n\n");


          for(i = 0;i <7; i++)
          {

              printf("value of %d Element is:%d\n",i+1,Arr[i]);


              sum = sum + Arr[i];

          }

          getch();

          printf("\n\nsome count of Array Element is :%d",sum);

          getch();
          return 0;

}
