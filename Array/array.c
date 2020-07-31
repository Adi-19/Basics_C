#include <stdio.h>
#include <conio.h>

void main()
{

int a[50],size,i;
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
printf("\nelements in array are");
for(i=0;i<size;i++)
    {
        printf("\n %d",a[i]);
    }
}

}
