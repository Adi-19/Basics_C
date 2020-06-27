// WAP to show the use of GOTO( Forward )
// Author : Aditya Bobde

#include<stdio.h>
#include<conio.h>

void main()
{
    goto stop;
    printf("\n 1 statement..");
    printf("\n 2 statement..");

    stop:
        printf("last statement");

}
// 1st and 2nd statement will be skip
