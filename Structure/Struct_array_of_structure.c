#include<stdio.h>
#include<string.h>

struct student
{
    char name[20];
    int roll;
    float marks;
};

int main(int argc, char const *argv[])
{
    int i;
    struct student stuarr[10];
    for ( i = 0; i < 3; i++)
    {
        printf("Enter Name Roll Number and Mark: ");
        scanf("%s %d %f",&stuarr->name,&stuarr->roll,&stuarr->marks);
    }
    for ( i = 0; i < 3; i++)
    printf("%s\t %d\t %f\t",stuarr->name,stuarr->roll,stuarr->marks);
    return 0;
}
