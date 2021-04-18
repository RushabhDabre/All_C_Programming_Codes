#include<stdio.h>

int main()
{
    int i,n,x,y,z;
    x=0;
    y=1;
    
    printf("Enter any number: ");
    scanf("%d",&n);

    printf("%d\t",x);
    
    for ( i = 0; i < n; i++)
    {
        
        z=x+y;
        x=y;
        y=z;
        printf("%d\t",x);

    }
    return 0;
    
}
