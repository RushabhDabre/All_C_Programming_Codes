#include<stdio.h>

void funct(int age, float ht)
{
    if (age>25)
    {
        printf("Age should be less than 25!!");
        return;
    }
    if (ht<5)
    {
        printf("hight should be more");
        return;
    }
    printf("Selected!!");
    
}
int main()
{
    int age;
    float ht;
    printf("Enter age and hight of a person: ");
    scanf("%d%f", &age, &ht);
    funct(age,ht);
    return 0;
}
