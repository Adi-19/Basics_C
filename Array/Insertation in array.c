// Aim = Insert element in array at any position
#include <stdio.h>
#include <conio.h>

void main()
{

int a[50],size,i,num,pos;
printf("enter size of array");
scanf("%d",&size);
if( size>a[50])
    printf("overflow");
else
{
    printf("enter elements of array");
for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
printf("enter number to be inserted");
scanf("%d",&num);
printf("enter position");
scanf("%d",&pos);
for(i=size-1;i>=pos-1;i--)
{
    a[i+1]=a[i];
}
a[pos-1]=num;
size++;
printf("\nelements in array are");
for(i=0;i<size;i++)
    {
        printf("\n %d",a[i]);
    }
}

}
