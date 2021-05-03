#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 30;
    float b = 50.005;
    int *p1 = &a;
    float *p2 = &b;
                                                                                           
    printf("The value of a is %d %d and %d, and the value of b is %f %f and %f\n",a,*p1,*(&a),b,*p2,*(&b));            //value of a  = *p1 = *(&a)
    printf("The adress of a is %u and %u, and the adress of b is %u an %u\n",&a,p1,&b,p2);                             //adress of a = &a = p1
    printf("The value of p1 is %u and The value of p2 is %u\n",p1,p2);                                                 //value of p1 = adress of a
    printf("The adress of p1 is %u, and the adress of p2 is %u\n",&p1,&p2);                                            //adress of p1 = &p
    return 0;
}

