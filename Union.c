#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    union rush
    {
        int marks;
        char grade;
        float percent;
    };

    union rush res;
    res.marks=90;
    printf("Marks: %d\n",res.marks);
    res.grade='A';
    printf("Grade: %c\n",res.grade);
    res.percent=85.5;
    printf("percent: %.1f\n",res.percent);
    
    return 0;
}
