#include<stdio.h>


int main(int argc, char const *argv[])
{
    int arr[10]={1,2,3,11,40,0,6,7,9,10};
    int i,min,max;

    min=max=arr[0];

    for ( i = 1; i < 10; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }

    printf("The max number is %d and min number is %d",max,min);
    
    return 0;
}
