#include<stdio.h>
#include<math.h>

void Funct(int age, float ht);
int main(int argc, char const *argv[])
{
    int age;
    float ht;
    printf("Enter your age and Height: ");
    scanf("%d %f",&age,&ht);
    Funct(age,ht);
    return 0;
}
void Funct(int age, float ht)
{
    if (age>25)
    {
        printf("The age should be smaller than 25");
        return;
    }
    else if (ht<5)
    {
        printf("The Height Should be greater than 5");
        return;
    }
    else
    {
        printf("you are selected!!!!");
    }
    
}
