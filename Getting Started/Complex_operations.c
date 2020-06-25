// WAP to show the use of Parenthesis in expressions.
// Author : Aditya Bobde
#include<stdio.h>
#include<conio.h>

void main()
{
    float a,b,c,x,y,z;
    a = 9;
    b = 12;
    c = 3;
    x = a-b/3+c * 2-1;
    y = a-b/(3+c) * (2-1);
    z = a-(b/(3+c)*2)-1;

    printf("\tx = %f",x);
    printf("\n\ty = %f",y);
    printf("\n\tz = %f",z);

}
