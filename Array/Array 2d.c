// WAP to show the use of 2D array

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[2][2],i,j;
    printf("enter 4 elements");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
     for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
            printf("%d",a[i][j]);
        }




}
