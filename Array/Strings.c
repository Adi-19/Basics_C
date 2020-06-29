// WAP for reading Strings from terminal

#include<stdio.h>
#include<conio.h>

void main()
{
    char fname[30];
    char lname[30];
    printf("Enter first name:\n");
    scanf("%s",&fname);
    printf("Enter last name");
    scanf("%s",&lname);
    printf("Your name is: %s %s\n",fname,lname);
}
