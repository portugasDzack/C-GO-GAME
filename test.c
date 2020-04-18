#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


void test(char * filename){



char filename1[64]="C:\\Users\\Apollo\\Desktop\\jeugo\\saves\\";
const char * b = filename;

FILE * fpointer;

printf("le nom de fichier : %s\n",filename1);
printf("le nom de fichier : %s\n",filename);
strcat(filename1,b);

printf("    %s: ",filename1);

    char str[MAXCHAR];


    fpointer = fopen(filename1,"r");
    if (fpointer == NULL){
        printf("Could not open file %s",filename1);

    }
    while (fgets(str, MAXCHAR, fpointer) != NULL)
        printf("%s", str);
    fclose(fpointer);



}






