#include <stdio.h>
#define size 10

int main()
{
    int i, item, arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Enter any number: ");
    scanf("%d", &item);
    for (i = 0; i < size; i++)
    {
        if (item == arr[i])
        {
            printf("%d is present in the array", item);
            break;
        }
    }
    if (i == size)
    {
        printf("%d is not located in an array", item);
    }
    
    return 0;
}
