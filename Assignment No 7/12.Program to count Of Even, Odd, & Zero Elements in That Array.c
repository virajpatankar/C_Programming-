#include<stdio.h>
#include<conio.h>

int main()
{


       int Arr[7]={}, i = 0, Ecnt = 0, Ocnt = 0 cnt = 0;

       for(i = 0; i < 7; i++)
       {


           printf("Enter value of %d Element:",i+1);
           scanf("%d",&Arr[i]);

       }

       getch();
       printf("\n\n");


       for(i = 0; i < 7; i++)
       {

           printf("value of %d Element is:%d\n",i+1,Arr[i]);


           if ((Arr[i] % 2 == 0) && (Arr[i] ! = 0))
           {

               Ecnt++;

           }
           else if (Arr[i] % 2 == 1)
           {

               0cnt++;

           }

           else if(Arr[i] == 0)
           {

               Zcnt++;

           }
           else
           {

               printf("Invalid Element..");

            }

        }
        getch();

        printf("\n\nEven count in the Array is :%d",Ecnt);
        printf("\n\n0dd count in the Array is :%d",0cnt);
        printf("\n\nZero count in the Array is :%d",Zcnt);

        getch();
        return 0;

}``
