// WAP to Compare 2 strings

#include<stdio.h>

void main()
{
    char fname[30] = {"Bob"};
    char lname[30] = {"Bob"};
    printf("%d",strcmp(fname,lname)); // It will show 0 since both the strings are equal
                                      // It will show -1 is String 1 is less than string 2  else +1

}
