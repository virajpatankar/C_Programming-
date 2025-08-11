#include<stdio.h>
#include<conio.h>

int main()
{


       int i = 0, j = 0, R = 0,c = 0;
       char ch = 'A';

       printf("\n Enter Row Number:");
       scanf("%d",&R);}
       printf("\n Enter column Number:");
       scanf("%d",&c);

       printf("\n\n");

       for(i = 1; i <= R; i++)
       {

              for(j = 1; j <= c; j++)
              {

                    printf("%c", ch);
                    ch++;

               }
               printf("\n");

       }
       getch();
       return 0;

}
