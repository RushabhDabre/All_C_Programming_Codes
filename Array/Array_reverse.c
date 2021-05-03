#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr[10]={1,2,3,4,5,10,9,8,7,6};
    int temp,i,j;

    for ( i=0,j=9; i < j; i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    printf("After reversing the Array: ");

    for(i=0;i<10;i++)

    printf("%d  ",arr[i]);
    printf("%d");

    return 0;
}
