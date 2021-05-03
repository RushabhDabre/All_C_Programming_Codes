#include<stdio.h>
#include<conio.h>

main()
{
    int arr[5],i;

    for ( i = 0; i < 5; i++)
    {
        printf("Enter the element in an arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    
    printf("The array elements are: ");

    for(i=0; i<5; i++)
    printf("%d\t",arr[i]);
    printf("\n");
    return 0;
}
