// WAP to show the use of Nested if
// Author : Aditya Bobde

void main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)

            printf("\n a is greater");
        else
            printf("\n c is greater");
    }

    else
        printf("\n b is greater");
}
