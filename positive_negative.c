#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    
    printf("Enter any number: ");
    scanf("%d",&n);

    if (n < 0)
    {
        printf("Number is Negative");
    }
    else if (n == 0)
    {
        printf("The number is zero");
    }
    else
    {
        printf("Number is Positive");
    }
    
    
    return 0;
}
