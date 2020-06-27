// WAP to show the use of Do..While (Print 0 to 10 numbers)
//Author : Aditya Bobde

#include<stdio.h>
#include<conio.h>

void main()
{
    int i=10;
    do
    {
        printf("\n%d",i);
        i++;
    }while(i<9);

}
// i value is 10 but the statement will excute at least once
