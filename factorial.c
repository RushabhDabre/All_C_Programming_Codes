#include<stdio.h>

int main(int argc, char const *argv[])
{
    int fact =1;
    int n;

    print : printf("Enter the Number: ");
    scanf("%d",&n);

    if (n<0)
    {
        printf("No Factorial for This number!!\t");
        goto print;
    }
    else
    {
        while (n>1)
        {
            fact=fact*n;
            n--;
        }
        printf("The Factorial of the number is %d",fact);
        
    }
    
    
    return 0;
}
