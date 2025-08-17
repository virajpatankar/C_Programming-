#include <stdio.h>
#include <conio.h>

int main()
{
    int num = 0, digit = 0, sum = 0, count = 0, temp = 0;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    temp = num;
    while (num != 0)
    {
        num /= 10;
        count++;
    }

    if (count == 5)
    {
        while (num != 0)
        {
            digit = num % 10;
            sum = sum + digit;
            num /= 10;
        }
        printf("\n The sum of the Digits is: %d\n", sum);
    }
    else
    {
        printf("\n Invalid input. Please enter a 5-digit number.\n");
    }

    getch();
    return 0;
}
