
// Problem Statement --  1 + 3 + 7 + 14 + 25 + ?.......till n.

#include<stdio.h>

int main()
{
    
    int n,i,t,sum;                                               
    sum = 0;
    t = 1;

    printf("Enter the term: ");
    scanf("%d",&n);

    for ( i = 1; i <=n ; i++)
    {
        sum+=t;                                                                                                     
        t+=i;
        printf("%d + ",sum);
    }
    printf("The sum of series upto n term(%d term) is %d",n,sum);
    
    return 0;
}


/*Explaination

1 + 3 + 7 + 14 + 25 + ?

sum = 0                                t = 1

sum = sum + t                          t = t + i

Sum = 0   + 1 = 1                      t = 1 + 1 = 2
sum = 1   + 2 = 3                      t = 2 + 2 = 4
sum = 3   + 4 = 7                      t = 4 + 3 = 7

Continue till n.
*/