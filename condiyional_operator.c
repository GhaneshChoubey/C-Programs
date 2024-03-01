#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
    printf("Enter two numbers:-");
    scanf("%d %d",&a,&b);
    printf("Greater number is %d",a>b?a:b);
    return 0;
}