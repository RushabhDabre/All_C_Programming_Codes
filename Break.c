#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);

    for (int i = n; i >=1; i--)
    {
        if (i==3 || i==6 || i==9)
        {
            printf("This is the Lucky number!!\n");
            break;
        }
        else
        {
            
            printf("This is not the lucky number!!\n",i);
            break;
        }
        
        
    }
    
    return 0;
}
