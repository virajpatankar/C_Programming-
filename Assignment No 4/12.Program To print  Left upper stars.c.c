#include<stdio.h>
#include<conio.h>

int main()
{


       int i=0, j=0, Rc=0;

       printf("Enter a Row & column size");
       scanf("%d",&Rc);

       for(i=0; i<=Rc; i++)
       {


             for(j=0; j<=Rc; j++)
             {


                     if((i+j) <= (Rc+1))
                     {

                           printf("  *  ");

                     }
                     else
                     {

                           printf("    ");

                     }

               }
               printf("\n");

        }
        getch();
        return 0;

}
