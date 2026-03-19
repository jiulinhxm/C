#include <stdio.h>
#include <string.h>

int main()
{
    char str[10] = "Hello";
    char str2[10] =" ab";

    size_t len = strlen(str);
    printf("%ld\n",len);

    printf("%s\n",strcat(str,str2));
    
    strcpy(str,str2);
    printf("%s\n",str2);

    char str3[10] = "Hello";
    scanf("%s",str2);
    int cmp = strcmp(str3,str2);
    // printf("%d",cmp);
    if( cmp == 0)
    {
        printf("same");
    } 
    else if(cmp > 0)
    {
        printf("str > str2");
    }
    else if(cmp <0 )
    {
        printf("str < str2");
    }

}