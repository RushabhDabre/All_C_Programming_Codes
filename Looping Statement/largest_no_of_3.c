#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c,large;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b)
    {
        if (a>c)
        large = a;
        else
        large = c;
    }

    else
    {
        if(b>c)
        large = b;
        else
        large = c;
    }
    
    printf("The LArgest number is %d",large);
    
    return 0;
}
