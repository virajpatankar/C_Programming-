#include<stdio.h>
#include<conio.h>

int fun();

int main()
{


          int Cnt = 0;

          printf("\n Welcome We are inside main()");
          getch();

          Cnt = fun();

          printf("\n Back To main() \t No of calls To fun are => %d",Cnt);

          getch();
          return 0;

}

int fun()
{

           int i = 0;

           i++;

           printf("\n Inside fun() Functions\t Call No = %d",i);
           getch();

           if(i <= 5)
           {

                 fun();

            }

}
