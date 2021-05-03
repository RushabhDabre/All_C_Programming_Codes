#include<stdio.h>

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return (n*factorial(n-1));
    }
    
}
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number you want to find factorial of: ");
    scanf("%d",&num);
    printf("The factorial of %d is %d",num,factorial(num));
    return 0;
}
