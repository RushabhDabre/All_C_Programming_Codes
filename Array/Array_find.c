#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i,item;

    printf("Enter the item you want to search: ");
    scanf("%d",&item);

    for ( i = 0; i < 10; i++)
    {
        if (item==arr[i])
        {
            printf("%d Found Positive at arr[%d]",item,i);
            break;
        }
        
        if(i>10)
        {
            printf("%d does not found in the Array!!!",item);

        }
    
    }
    
    
    return 0;
}
