// WAP to show the use of switch case
// Author : Aditya Bobde

#include<stdio.h>
#include<conio.h>

void main()
{
    char ch='o' ;
    switch(ch)
    {
    case 'a':
        printf("\n U press a");
        break;
    case 'i':
        printf("\n U press i");
        break;
    case 'o':
        printf("\n U press o");
        break;
    case 'u':
        printf("\n U press u");
        break;
    case 'e':
        printf("\n U press e");
        break;
    default:
        printf("\n unknown character ");
        break;
    }
}
