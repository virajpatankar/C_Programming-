#include<stdio.h>
#include<conio.h>

int main()
{

     char cSrc[40] = "Input", cDest[40] = "OutputString";
     int i = 0;

     printf("\n Enter a string : ");
     gets(cSrc);

     printf("\n\n Before => ");
     printf("\n Given string is = %s",cSrc);
     printf("\n Copied String is = %s",cDest);

     While(cSrc[i] != '\0')
     {

         cDest[i] = cSrc[i];
         i++;
     }

    cDest[i] = '\0';

    printf("\n\n After => ");
    printf("\n Given String is = %s. ",cSrc);
    printf("\n Copied String s = %s. ",cDest);

    getch();
    return 0;

}
