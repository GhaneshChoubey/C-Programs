/* Check a number whether it is even or odd without ussing % operator */

#include<stdio.h>
#include<conio.h>

int main()
{
    int x;
    printf("Enter a number:-");
    scanf("%d",&x);
    if(x&1)
    {
        printf("Odd Number");
    }
    else
    {
        printf("Even number");
    }
    
}