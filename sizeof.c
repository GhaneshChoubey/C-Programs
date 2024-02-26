#include<conio.h>
#include<stdio.h>
void main()
{
    int x;
    x=sizeof(int);
    printf("The size of int is:-%d",x);
    
    int y;
    y=sizeof(float);
    printf("\nThe size of float is:-%d",y);
    
    int z;
    z=sizeof(double);
    printf("\nThe size of double is:-%d",z);
    
    int a;
    a=sizeof(char);
    printf("\nThe size of char is:-%d",a);
    
}