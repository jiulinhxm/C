#include <stdio.h>

int readAdd(char *fileName)
{
    FILE *pFile = fopen(fileName,"r+");
    
    fseek(pFile,0,SEEK_END);
    // char fileStr[10];
    // fscanf(pFile,"%s",fileStr);
    // printf("%s",fileStr);r

    fprintf(pFile,"ABC");
    
    fflush(pFile);

    char fileStr2[10];
    fscanf(pFile,"%s",fileStr2);
    printf("%s\n",fileStr2);

    fclose(pFile);
}

int main()
{
    char str[10] = "data.txt";

    readAdd(str);
}