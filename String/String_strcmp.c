#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char name1[20];
    char name2[20];
    
    printf("Enter The First Name: ");
    scanf("%s",&name1);
    printf("Enter The Second Name: ");
    scanf("%s",&name2);
    if((strcmp(name1,name2))==0)
    printf("Strings are same");
    else
    {
        printf("Strings are not same");
    }
    return 0;
}
