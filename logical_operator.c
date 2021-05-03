
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int a;
    int b;

printf("Enter marks for Maths and Science: ");
scanf("%d %d",&a,&b);

if (a>90 && b>90)
{
    printf("you are Pass!!");
}
else if (a>90 && b<90)
{
    printf("you are pass in MAths but fail in science");
}
else if (a<90 && b>90)
{
    printf("you are pass in MAths but fail in science");
}
else if (a<90 && b<90)
{
    printf("you are pass in MAths but fail in science");
}



    return 0;
}
