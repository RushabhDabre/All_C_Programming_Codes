#include<stdio.h>

int main()
{
    int i,n,x,y,z;
    x=0;
    y=1;
    i=0;

    printf("Enter any number: ");
    scanf("%d",&n);

    printf("%d\t",x);

    while (i < n)
    {
        z=x+y;
        x=y;
        y=z;
        i++;
        printf("%d\t",x);

    }
    return 0;
    
}