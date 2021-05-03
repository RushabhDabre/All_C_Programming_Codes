#include<stdio.h>

void main(int argc, char const *argv[])
{
    int a,b,c,d,total;
    float percent;

    printf("Enter the marks is all four subjects out of 100: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    total = a+b+c+d;
    printf("The total Marks obtained is: %d\n",total);

    percent = total/4;
    printf("The percentege you have got is: %f\n",percent);

    if (percent >=90)
    {
        printf("Congrats!! You Have got A grade.\n");
    }
    else if (percent >=75 && percent <90)
    {
        printf("You Got B grade!! Good luck for the Next Semester.\n");
    }
    else if (percent >=50 && percent <75)
    {
        printf("You Got C grade!! Do Hard work for better performance.\n");
    }
    else
    {
        printf("You Got D grade!! Beter Luck Next Time.\n");
    }
    
    
    

    return 0;

}
