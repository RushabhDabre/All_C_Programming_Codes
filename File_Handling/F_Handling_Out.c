// File Handling
// FILE NULL EOF(End Of Filer) should be capital
// fopen ----opens the file
// w -- write ----fputc()
// r -- read ----fgetc()
//  ctrl + z -----to insert the value in the file
#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fptr;
    char ch;
    if ((fptr = fopen("myfile.txt","r"))==NULL)
    {
        printf("File does not Exists\n");
    }
    
    else
    {
        while ((ch = fgetc(fptr))!=EOF) //ctrl + z
        printf("%c",ch);
    }
    fclose(fptr);
    return 0;
}
