#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *ptr;
    int n;

    printf("Enter the size of the array you want to create: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element(%d) inside the array: ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
        printf("The value at %d of this array is %d\n", i, ptr[i]);

    return 0;
}
