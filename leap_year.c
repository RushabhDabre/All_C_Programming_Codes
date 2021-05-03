#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Enter the Year: ");
    scanf("%d",&n);

    if (n%100==0)
    {
        if (n%400==0)
        {
            printf("The Year is leap Year!!!");
        }
        else
        {
            printf("The Year is not leap Year");
        }
        
        
    }
    else 
    {
        if (n%4==0)
        {
            printf("The Year is leap Year!!!");
        }
        else
        {
            printf("The Year is not leap Year!!!");
        }
    }
    
    
    
    return 0;
}
