// WAP to show the use of Else if ladder
// Author : Aditya Bobde
#include<stdio.h>
#include<conio.h>

void main()
{
    float per;
    printf("Enter marks");
    scanf("%f",&per);

    if(per>100)
        printf("Value entered is greater than 100%. Please Enter Valid value");
    else if(per <= 100&& per >= 70)
        printf("\n Distinction");
    else if(per >=60)
        printf("\n First Class");
    else if(per >= 50)
        printf("\n Second class");
    else if(per >= 35)
        printf("\n pass class");
    else
        printf("\n fail");
    getch();


}
