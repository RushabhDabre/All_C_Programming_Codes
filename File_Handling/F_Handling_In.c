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
    int ch;
    if ((fptr = fopen("myfile.txt","w"))==NULL)
    {
        printf("File does not Exists\n");
    }
    
    else
    {
        printf("Enter text: ");
        while (ch = getchar()!=EOF) //ctrl + z
        fputc(ch,fptr);
    }
    fclose(fptr);
    return 0;
}
