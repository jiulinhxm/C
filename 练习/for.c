#include <stdio.h>

int add(int a,int b)
{
    return a+b;
}

int main()
{
    int i ;
    for(i=0;i<10;i++)
    {
        printf("for\n");
    }

    while(i >5)
    {
        i--;
        printf("while\n");
    }

    do
    {
        printf("do while\n");
    }
    while(i<5);

    int j;
    for(j=0;j<10;j++)
    {
        if(j==5)
        {
            // break;
            continue;
        }
        printf("%d,j\n",j);
    }

    printf("%d\n",add(3,4));

    printf("Hello""World");
}