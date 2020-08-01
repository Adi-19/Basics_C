// Aim : Delete any item from array
#include <stdio.h>
#include <conio.h>

void main()
{

int a[50],size,i,pos;
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
printf("Which item to be deleted");
scanf("%d",&pos);
if(pos<=0 || pos>=size)
{
    printf("invalid");

}

else
    for(i =pos-1;i<size-1;i++)
    {
        a[i]=a[i+1];
    }
    size--;

printf("\nelements in array are");
for(i=0;i<size;i++)
    {
        printf("\n %d",a[i]);
    }
}

}
