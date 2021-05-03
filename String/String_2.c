#include<stdio.h>

int main(int argc, char const *argv[])
{
    char str[]="India";
    char *p;
    p = str;

    while (*p!='\0')                                 //The last char in a C string (char array) is a null ('\0') value.
    {
        printf("character = %c\t",*p);
        printf("Adrress = %u\n",p);
        p++;
    }
    
    return 0;
}
