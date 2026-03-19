#include <stdio.h>

int write(char *file)
{
    FILE *pFile = fopen(file,"w");

    fprintf(pFile,"cde");
    fputc('A',pFile);
    fputs("Hello",pFile);
}
int read(char* file)
{
    FILE *pFile = fopen(file,"r");

    char str[10];
    fscanf(pFile,"%s",str);
    printf("%s\n",str);

    
    printf("%c",fgetc(pFile)) ;
    printf("%c",fgetc(pFile)) ;

    // char str2[10];
    // fgets(str2,10,pFile);
    // printf("%s",str2);
}
int main()
{
    char str[10] = "data.txt";
    // write(str);

    read(str);
    
}