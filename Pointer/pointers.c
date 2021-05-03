#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a=7;
    int *p = &a;
    printf("The value of a is %d: \n",*p);
    printf("The value of a is %d: \n",a);
    printf("The value of a is %d: \n",*(&a));
    printf("The address of a is %u: \n",&a );
    printf("The address of a is %u: \n",p);
    printf("The value of pointer p is %u: \n", p);
    printf("The address of pointer p to a is %u: \n",&p );
    return 0;
}
