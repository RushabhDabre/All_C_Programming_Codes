#include<stdio.h>

int mult(int x, int y, int z)
{
    int s;
    s=x*y*z;
    return s;
}
int main()
{
    int a, b, c, s;
    printf("Enter any three values: ");
    scanf("%d%d%d", &a, &b, &c);
    s=mult(a,b,c);
    printf("The multiplication of %d %d and %d is %d.",a,b,c,s);
    return 0;
}
