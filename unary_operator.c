#include<stdio.h>
#include<conio.h>
void main()
{
    int x=3;
    //clrscr();
    x++;//x=x+1 Post increment less priority
    printf("%d ",x);
    ++x;//x=x+1 Pre increment more priority
    printf("%d",x);

}