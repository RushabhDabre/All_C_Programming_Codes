
// difrent type of structure syntax

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
    struct student stu1={"Sam",1,50};                                               //type 1

    struct student stu2,stu3;
    
    strcpy(stu2.name,"john"); stu2.roll=2; stu2.marks=66;                           //type 2

    printf("Enter the Name Roll No and Marks For Student 3: ");
    scanf("%s %d %f",&stu3.name,&stu3.roll,&stu3.marks);                            //type 3

    printf("Student 1: %s\t %d\t %.2f\n",stu1.name,stu1.roll,stu1.marks);
    printf("Student 2: %s\t %d\t %.2f\n",stu2.name,stu2.roll,stu2.marks);
    printf("Student 3: %s\t %d\t %.2f\n",stu3.name,stu3.roll,stu3.marks);

    return 0;
}

