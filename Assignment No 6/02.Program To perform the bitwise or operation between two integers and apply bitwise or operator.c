#include<stdio.h>
#include<conio.h>

int main()
{


        int No1 = 0,No2 = 0,Res = 0;

        printf("Enter First number =");
        scanf("%d",&No1);


        printf("Enter second Number =");
        scanf("%d",&No2);

        Res = No1 | No2;

        printf("Result = %d | %d = %d",No1,No2,Res);

        getch();
        return 0;

}
