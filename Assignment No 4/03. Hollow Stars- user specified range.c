#include<stdio.h>
#include<conio.h>

int main()
{

      int R = 0, c = 0, Row = 0, col = 0;

      printf("\n Enter Row count : ");
      scanf("%d",&Row);
      printf("\n Enter column count : ");
      scanf("%d",&col);

      for( R = 1; R<= Row; R++ )
      {

          for( c = 1; c <= col; c++)
          {

              if(R == 1 || c == 1 || R == Row|| c == col )
              {

                  printf("  *  ");

               }
               else
               {

                   printf("     ");

                }

          }
          printf("\n");

      }
      getch();
      return 0;
}
