#include<stdio.h>
#include<conio.h>
int main()

{

      int R = 0, c = 0, cnt = 0;

      printf("\n Enter Row & column count : ");
      scanf("%d",&cnt);       ///5

      for ( R = 1; R<=cnt; R++ )
      {

           for ( c = 1; c<=cnt; c++ )

          {

                 if( c == 1 ||  c== cnt || R == c )

              {

                 printf("  *  ");

              }
              else
              {

                 printf("   ");

              }

         }
         printf("\n");
     }

     getch();
     return 0;

}
