// WAP to show the use of 1D Array

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[5];
    int i;
    printf("enter the numbers");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    for(i=4;i>=0;--i)
    printf("\n%d",a[i]);

}
