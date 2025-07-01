#include<stdio.h>
#include<conio.h>
int main()
{

          int num1,num2,num3;
          printf("Enter the first number:");
          scanf("%d",&num1);
          printf("Enter the second number:");
          scanf("%d",&num2);
          printf("Enter the third number:");
          scanf("%d",&num3);
          int temp= num1;
          num1 = num2;
          num2 = num3;
          num3 = temp;
          printf("After Swapping:\n");
          printf("First number:%d\n",num1);
          printf("second numbwr:%d\n",num2);
          printf("Third number:%d\n",num3);
          getch();
}
