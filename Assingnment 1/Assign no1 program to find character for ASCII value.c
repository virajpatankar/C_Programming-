#include<stdio.h>
#include<conio.h>
void main()
{

        int val=0;
        printf("\n Enter ASCII letter to get ASCII value:");
        scanf("%d",& val);
        if ( (val>0) && (val<256))
        {

            printf("\n\n ASCII letter for value %d is<%c>.",val,val);

        }
        else
        {

             printf("\n Invalid value...");

        }
        printf("\n thanks");
        getch();
}
