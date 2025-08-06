#include<stdio.h>
#include<conio.h>
int main()

{
      int R = 0, c = 0, cnt = 0;

      printf("\n Enter row and column count : ");
      scanf("%d",&cnt);

      for( R = 1; R<= cnt; R++ )
      {

          for( c = 1; c<= cnt; c++ )

          {

                if( R == 1 || R == cnt ||(R + c) == (cnt + 1 ) )
                {

                     printf("  *  ");

                 }
                 else
                 {

                      printf("      ");

                 }

           }

           printf("\n");
       }

       getch();
       return 0;
}
