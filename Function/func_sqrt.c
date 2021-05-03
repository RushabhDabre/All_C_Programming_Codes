#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    double s,n;

    printf("Enter the number: ");
    scanf("%lf",&n);

    s=sqrt(n);
    printf("The squareof the number is: %.2lf",s);
    return 0;
}
