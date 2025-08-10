#include<stdio.h>
#include<conio.h>

int main()
{


      int i=0, j=0, R=0, c=0;

      printf("Enter a value");
      scanf("%d",&R);
      printf("Enter a value");
      scanf("%d",&c);

      for(i=0; i<R; i++)
      {

           for(j=0; j<c; j++)
           {

               printf("%d", i);

           }
           printf("\n");

       }
       getch();
       return 0;

}
