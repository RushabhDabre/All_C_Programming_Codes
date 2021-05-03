#include<stdio.h>
#include<math.h>
void drawline(void);
int main(int argc, char const *argv[])
{
    drawline();
    return 0;
}
void drawline(void)
{
    int i;
    for ( i = 0; i < 8; i++)
    {
        printf("_");
    }
}   
