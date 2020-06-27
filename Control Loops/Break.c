// WAP to show the use of break statement
// Author : Aditya Bobde

#include<stdio.h>
#include<conio.h>

void main()
{
    int i = 0;
    while(i<=6)
    {
        i++;
        if(i==4)
            break;
        printf("\n%d",i);
    }
}
