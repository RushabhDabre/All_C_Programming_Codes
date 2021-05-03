#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fpt;
    int value;
    fpt=fopen("num.dat","wb");
    for (value = 0; value <= 50; value++)
    putw(value,fpt);
    fclose(fpt);
    
    return 0;
}
