// WAP to show the use of if..else
// Author : Aditya bobde

#include<stdio.h>
#include<conio.h>

void main()
{

    int num1,num2;
    printf("\n Enter first number");
    scanf("%d",&num1);
    printf("\n Enter second number");
    scanf("%d",&num2);

    if(num2 ==0){
        printf("\n\n Cannot divide by zero\n\n");

    }
    else{
        printf("\n\nAnswer is %d\n\n",num1/num2);
    }



}
