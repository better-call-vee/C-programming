#include<stdio.h>
int main ()
{
    FILE *logFile = fopen("log.txt", "a");
    FILE *inputFile = fopen("habijabi.txt", "r");
    if(inputFile==NULL)
    {
        fprintf(logFile, "Input file not found at 03:22 PM\n");
        return 0;
    }
    return 0;
}

//the output will be shown in a file newly created named log.txt
//everytime it will be run, the output file will get a new line.
//because there isn't any file named habijabi.txt
