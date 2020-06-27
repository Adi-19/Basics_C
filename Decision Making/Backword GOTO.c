// WAP to show the use of Backward goto
// Author  : Aditya Bobde

#include<stdio.h>
#include<conio.h>

void main()
{
    int n = 2;
    start:
        if(n<5)
            printf("\nValue of n =%d",n);
            n++;
            goto start;

}
