#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
    printf("Enter two numbers:-");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d b=%d",a,b);
}