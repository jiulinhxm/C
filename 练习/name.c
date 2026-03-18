#include <stdio.h>

int main()
{
    int i = 123;
    int arr[4] = {0,1,2,3};
    char str[] = "Hello world";
    printf("%d\n",i);
    int j;
    for(j=0;j<4;j++)
    {
        printf("%d\n",*(arr+j));
    }
    
    printf("%s\n",str);

    float f = i/2;
    printf("%f\n",f);
    f = i /2.0;
    printf("%f\n",f);

    enum abc{
        first,
        second,
        third
    };

    enum abc t = second;

    printf("%d\n",t);

    char ch = 'A';
    printf("%c\n",ch);
    printf("%c\n",ch+1);

}