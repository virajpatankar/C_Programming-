#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


#define Scnt  15

struct stud
{


               int Roll_No;
               char Name[40];
               int phy;
               int chem;
               int Math;
               float Total;
               float per;

};

int main()
{

                int i = 0;
                struct stud Std[Scnt] = {0};

                printf("\n Enter student detail =>\n");

                for(i = 0; i < Scnt; i++)
                {

                    printf("\n Enter student Roll No :");
                    scanf("%d", &std[i].Roll_No);

                    fflush(stdin);

                    printf("\n Enter student Name :");
                    //scanf("%s",&std.Name);
                    gets(std[i].Name);

                    printf("\n Enter physics Marks :");
                    scanf("%d",&std[i].phy);

                    printf("\n Enter chemistry Marks :");
                    scanf("%d",&std[i].chem);

                    printf("\n Enter Mathematics Marks :");
                    scanf("%d",&std[i].Maths);

                    std[i].Total = std[i].phy + std[i].chem + std[i].Maths;

                    std[i].per = std[i].Total / 3;

                }

                printf("\n Enter Any key To Go Ahead =>");
                getch();

                printf("\n\n Entered student Details Are => \n\n");

                for(i = 0; i < scnt; i++)
                {


                    printf("\n =======================*****=======================");

                    printf("\n\t\t Roll Number       =%d", Std[i].Roll_No);
                    printf("\n\t\t Student Name      =%s", Std[i].Name);
                    printf("\n\t\t Physics Marks     =%d", Std[i].Phy);
                    printf("\n\t\t Chemistry Marks   =%d", Std[i].Chem);
                    printf("\n\t\t Mathematics Marks =%d", Std[i].Math);
                    printf("\n\t\t Total Marks       =%0.of",Std[i].Tptal);
                    printf("\n\t\t Percentage        =%0.3f",Std[i].Per);

                    printf("\n\n ======================*****=======================");

                }

                printf("\n\n Thanks For Using Our Application!!!");

                getch();
                return 0;

}


