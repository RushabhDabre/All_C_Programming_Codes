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
    strcpy(name1,name2);
    printf("First name = %s\t Second name = %s\n",name1,name2);
    strcpy(name1,"Rohit");
    strcpy(name2,"Niket");
    printf("First name = %s\t Second name = %s\n",name1,name2);
    return 0;
}
