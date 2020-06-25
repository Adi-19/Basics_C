// WAP to use Constant
// Author : Aditya Bobde

#include<stdio.h>
//#define SALESTAX 0.05
main()
{
    float amount, taxes, total, salestax =0.05;
    printf("Enter the amount purchased");
    scanf("%f,&amount");
    taxes = salestax*amount;
    printf("The Sales tax is %f",taxes);
//    printf("\n The total bill is %f",total);
    return 0;
}
