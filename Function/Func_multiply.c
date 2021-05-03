#include<stdio.h>
#include<math.h>

int mult(int x,int y, int z)
{
    int s;
    s=x*y*z;
}
int main(int argc, char const *argv[])
{
    int a,b,c,s;
    printf("Enter the values for a b & c: ");
    scanf("%d %d %d",&a,&b,&c);
    s=mult(a,b,c);
    printf(" the multiplication of %d %d & %d is: %d",a,b,c,s);
    return 0;
}
