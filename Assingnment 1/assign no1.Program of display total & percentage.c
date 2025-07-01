#include<stdio.h>
#include<conio.h>
int main()
{

          float marks1,marks2,marks3,total,percentage;

          printf("Enter marks for subject1:");
          scanf("%f",&marks1);

          printf("Enter marks for subject2:");
          scanf("%f",&marks2);

          printf("Enter marks for subject3:");
          scanf("%f",&marks3);

          total=marks1+marks2+marks3;

          percentage=(total/500)*100;

          printf("\nTotal marks:%2f\n",total);
          printf("Percentage:%2f%%\n",percentage);

          getch();


}
