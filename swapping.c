#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,t;
    printf("Enter two numbers:-\n");
    scanf("%d %d",&a,&b);
    printf("Before swapping a=%d and b=%d\n",a,b);
    
    t=a;
    a=b;
    b=t;
    printf("After swapping a=%d and b=%d\n",a,b);
    return 0;

}