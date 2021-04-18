#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    
    printf("Enter any number: ");
    scanf("%d",&n);

    if (n%2==0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
    
    
    return 0;
}
