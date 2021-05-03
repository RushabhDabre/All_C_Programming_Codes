#include<stdio.h>

long int factorial(int n)
{
    int i;
    long int fact=1;
    if (n==0)
    { 
        return 1;
    }
    for ( i = n; i > 1; i--)
    {
        fact=fact*i;
        
    }
    return fact;
}

main()
{
    int num;
    printf("Enter the value: ");
    scanf("%d", &num);
    if (num<0)
    {
        printf("Factorial not possible.Sorry!!!\n");
    }
    else
    {
        printf("The factorial of %d is %ld.\n",num,factorial(num));
    }
    return 0;
}
