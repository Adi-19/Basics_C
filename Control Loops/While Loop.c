// WAP to show the use of While loop (Sum of 1 to 10 numbers)
//Author : Aditya Bobde

#include<stdio.h>
#include<conio.h>

void main()
{
    int i=0, n=10,sum=0;
    while(i<n)
    {
        sum+= i;        // sum = sum+i;
        i++;            // increment of counter
    }
    printf("Sum of Numbers is %d",sum);

}
