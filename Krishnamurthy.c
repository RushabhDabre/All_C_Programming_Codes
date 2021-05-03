#include<stdio.h>

int main()
{
    int i,n,num,sum=0,f,fact=1;
    printf("Please enter a number: ");
    scanf("%d",&n);
    num=n;
    if(n==0)
    {
        printf("no Krishnamurthy number for this number\n");
        return 0;
        
    }
    else
    {
         while (num>0)
        {
            f=num%10;
            fact=1;
            
            for (i = f; i >=1; i--)
            {
                fact=fact*i;
            }
            sum=sum+fact;   
            num/=10;
        }
        if (n==sum)
        {
            printf("%d is a Krishnamurthy number\n",n);
        }
        else
        {
            printf("%d is not a krishnamurthy number",n);
        }
    }
    
       
        
    return 0;
}