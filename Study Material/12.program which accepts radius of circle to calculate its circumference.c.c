#include<stdio.h>
#include<conio.h>
int main()
{

        float radius,circumference;
        printf("Enter the radius of the circle:");
        scanf("%f",& radius);
        circumference=2*3.14*radius;
        printf(" The circumference of the circle with radius %2f is %2f\n",radius,circumference);
        getch();

}
