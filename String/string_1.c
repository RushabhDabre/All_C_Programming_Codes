#include<stdio.h>

int main(int argc, char const *argv[])
{
    char str[]="India";
    int i;

    for ( i = 0; str[i]!='\0'; i++)                                 //The last char in a C string (char array) is a null ('\0') value.
    {
        printf("character = %c\t",str[i]);
        printf("Adrress = %u\n",&str[i]);
    }
    
    return 0;
}
