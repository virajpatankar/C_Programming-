#include<stdio.h>
#include<conio.h>

int main()
{

          int Day = 0;

          printf("Enter a Number :");
          scanf("%d",&Day);

          switch (Day)
          {

                case 1:

                      printf("\n\nThe Day of this Number is:Sunday");
                      break;

                case 2:

                      printf("\n\nThe Day of This Number is: Monday");
                      break;

                case 3:

                      printf("\n\nThe Day of This Number is: Tuesday");
                      break;

                case 4:

                      printf("\n\nThe Day of This Number is: Wednesday");
                      break;

                case 5:

                      printf("\n\nThe Day of this Number is: Thursday");
                      break;

                case 6:

                      printf("\n\nThe Day of This Number is: Friday");
                      break;

                case 7:

                      printf("\n\nThe Day of This Number is: Saturday");
                      break;

                default:

                      printf("\n\nInvalid Number...");

            }

            getch();
            return 0;

}
