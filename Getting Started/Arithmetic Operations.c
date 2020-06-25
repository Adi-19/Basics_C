// WAP to perform Arthmetic operations
// Author : Aditya Bobde

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c,d,e,f,g;
    printf("\n\t Enter First Number:");
    scanf("%d",&a);
    printf("\n\t Enter Second Number:");
    scanf("%d",&b);

    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    g = a % b;

    printf("\n\n\t Addition is :%d ",a);
    printf("\n\n\t Subtraction is :%d ",d);
    printf("\n\n\t Multiplication is :%d ",e);
    printf("\n\n\t Division is :%d ",f);
    printf("\n\n\t Modulus is :%d ",g);

}
