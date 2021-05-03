/* 
Predefined MAcros
- __FILE__
- __DATE__
- __TIME__
- __LINE__
*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    printf("File name is: %s\n",__FILE__);
    printf("File creation date is: %s\n",__DATE__);
    printf("File creation time is: %s\n",__TIME__);
    printf("ANSI: %d\n",__STDC__);
    return 0;
}
