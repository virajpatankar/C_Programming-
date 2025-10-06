#include<stdio.h>
#include<conio.h>
int main()
{

     char cSrc[40] = "viraj", cDest[40] = "patankar";
     int i = 0;

     printf("\n Enter a string :");
     gets (cSrc);

     printf("\n\n Before string => ");
     printf("\n Given string is %s",cSrc);
     printf("\n Copied string is %s",cDest);

     while(cSrc[i] != '\0');
     {

         cDest[i] = cSrc[i];
         i++;

     }
     cDest[i] = '\0';

     printf("\n\n After => ");
     printf("\n Given string is %s ",cSrc);
     printf("\n Copied string is %s",cDest);

     getch();
     return 0;

}
