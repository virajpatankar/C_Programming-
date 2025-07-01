#include<stdio.h>
#include<conio.h>
int main()
{

          int val=0;
          printf("\n Enter ASCII value to get ASCII letter:");
          scanf("%d",&val);
          if( (val>0)&& (val<256))
          {

                 printf("\n\n ASCLL letter for value %d is<%c>.",val,val);

           }
           else
           {

                 printf("\n Invalid value...");

            }

            printf("\n thanks");
            getch();

}
