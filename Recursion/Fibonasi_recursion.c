//Fibonacci Series using Recursion
#include<stdio.h>
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    
    else
    {
        return fib(n-1) + fib(n-2);
    }
}

int main ()
{
int num;
printf("Enter the term: "); 
scanf("%d",&num);
printf("The value of series upto the term %d is %d",num,fib(num));
return 0;
}
