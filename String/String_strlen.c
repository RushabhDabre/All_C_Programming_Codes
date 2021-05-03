#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char name[20];
    int length;
    printf("Enter The Name: ");
    scanf("%s",&name);
    length = strlen(name);
    printf("%s",name);
    printf("the length of the string is: %d\n",length);
    return 0;
}
