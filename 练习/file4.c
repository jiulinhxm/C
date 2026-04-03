#include <stdio.h>

int main()
{
    FILE *pFile = fopen("data.txt","w+");

    int num[5] = {0,1,2,6,4};
    fwrite(num,sizeof(int)*5,1,pFile);

    fclose(pFile);
}