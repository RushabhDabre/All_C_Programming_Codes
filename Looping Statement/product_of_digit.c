#include<stdio.h>

int main()
{

    int mult=1;
    int n,rem;

    printf("Enter The Number: ");
    scanf("%d",&n);

    while (n>0)
    {
        rem = n%10;
        mult*=rem;
        n/=10;
    }
    printf("The product of the digit is %d\n",mult);
    
    return 0;
}