#include<stdio.h>
#include<conio.h>

int main()
{
    char i = '\0';

    printf("\n Letters From W To E......!!!!");

    for(i = 'W' ;i>= 'E';i-- )
    {
        printf("\n%c",i);

    }
    getch();
    return 0;
}
