#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    
    printf("Enter any two numbers: ");
    scanf("%d %d",&a,&b);

    if (a>b)
    {
        printf("a is larger than b");
    }
    else
    {
        printf("b is larger than a");
    }
    
    
    return 0;
}
