#include<stdio.h>

int main()
{
    int n,num,sum,d,cube;
    printf("The Armstrong numbers are: \n");
    for ( num = 100; num <= 500; num++)
    {
        n=num;
        sum=0;
        while (n>0)
        {
            d=n%10;
            n/=10;
            cube=d*d*d;
            sum=sum+cube;
        }
        if (num==sum)
        {
            printf("%d\n",num);
        }
        
        
    }
    
    return 0;
}