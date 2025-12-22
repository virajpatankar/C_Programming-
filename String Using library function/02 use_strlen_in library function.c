#include<stdio.h>
#include<conio.h>
int main()
{

      char cSrc[20] = "";
      int len = 0;

      printf("\n Enter a string");
      gets(cSrc);

      len = strlen(cSrc);

      printf("\n Given string length is %d",len);

      getch();
      return 0;

}
