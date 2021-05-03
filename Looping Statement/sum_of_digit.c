#include<stdio.h>

int main()
{

    int sum=0;
    int n,rem;

    printf("Enter The Number: ");
    scanf("%d",&n);

    while (n>0)
    {
        rem = n%10;
        sum+=rem;
        n/=10;
    }
    printf("The sum of the digit is %d\n",sum);
    
    return 0;
}