#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fpt;
    int value;
    fpt= fopen("num.dat","rb");
    while ((value = getw(fpt))!=EOF)
    printf("%d\t",value);
    fclose(fpt);
    
    return 0;
}
