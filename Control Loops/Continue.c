// WAP to show the use of Continue
//Author : Aditya Bobde

#include<stdio.h>
#include<conio.h>

void main()
{
    int x;
    for(x=0;x<=100;x++)
    {
        if(x%2==0)
            continue;
        printf("%d\n",x);
    }

}
