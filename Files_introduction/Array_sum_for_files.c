//#include<stdio.h>
//int main ()
//{
//    int n;
//    scanf("%d", &n);
//    int sum = 0;
//    for(int i=0; i<n; i++)
//    {
//        int a;
//        scanf("%d", &a);
//        sum += a;
//    }
//    printf("Sum -> %d", sum);
//    return 0;
//}
///with cmd
///go to the file location and click on the address. click on it and write cmd
///now press tab twice, then space, then <, then type in, then again tab, then >
///then out, then again tab.
///add the inputs in the input.txt file before
///then press enter
///you can press the up arrow key to write the same line


///without cmd only for character
//#include<stdio.h>
//int main ()
//{
//    FILE *inputFile;
//    inputFile = fopen("input.txt", "r");//here, r is the mode, r for read
//    if(inputFile == NULL)   //if the file name is not found, suppose, input2.txt
//    {
//        printf("No File Found\n");
//        return 0; //read file has to be there, otherwise program can't be executed
//    }
//
//    FILE *outputFile;
//    outputFile = fopen("output2.txt", "w");//here, if the file name is not found it
//    //doesn't matter. for output it will create a new file with this name. because
//    //the mode is write.
//    while(1)
//    {
//        char ch = fgetc(inputFile);
//        if(ch==EOF)
//        {
//            break; ///EOF means end of file.It will break the while loop of
//            ///reading input and writing output
//        }
//        fputc(ch, outputFile);
//    }
//    return 0;
//}


///without cmd but with the actual data type
#include<stdio.h>
int main () {
    FILE *inputFile;
    FILE *outputFile;
    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");
    if(inputFile==NULL) {
        fprintf(outputFile, "Not found");
        return 0;
    }

    int n;
    fscanf(inputFile, "%d", &n);
    int sum = 0;
    for(int i=0; i<n; i++) {
        int a;
        fscanf(inputFile, "%d", &a);
        sum += a;
    }
    fprintf(outputFile, "Sum -> %d", sum);
    fclose(inputFile);
    fclose(outputFile); //good practice, closing a file will take less data
    return 0;
}

///you can't resist the program to make an output file. it's obvious once it's
///commanded

///3 modes in c,
/// r, w and a. a is the append mode which add files





























