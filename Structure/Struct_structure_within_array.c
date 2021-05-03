#include<stdio.h>
#include<string.h>

struct student
{
    char name[20];
    int roll;
    float marks[4];
};

int main(int argc, char const *argv[])
{
    int i,j;
    struct student stuarr[3];
    for ( i = 1; i < 3; i++)
    {
        printf("Enter Data for student(%d): \n",i);
        printf("Enter Name: ");
        scanf("%s",&stuarr[i].name);

        printf("Enter Roll_No: ");
        scanf("%d",&stuarr[i].roll);
        for ( j = 1; j < 4; j++)
        {
            printf("Enter Marks for subject(%d): ",j);
            scanf("%f",&stuarr[i].marks[j]);
        }
        
    }
    for ( i = 1; i < 3; i++)
    {
        printf("Data of students(%d): \n",i);
        printf("Name: %s\t Roll_No: %d\t marks: ",stuarr[i].name,stuarr[i].roll);
        for ( j = 1; j < 4; j++)
        printf("%.2f\t",stuarr[i].marks[j]);
        printf("\n");
    }
    return 0;
}
