#include <stdio.h>

int main()
{   
    int a=1,b=2,c=3,d=4;
    
    if(a>b && c<d)
    {
        printf("True");
    }
    else if(a>b || c<d)
    {
        printf("else if");
    }
    else
    {
        printf("else");
    }

    int e =  (a<b)?c:d;
    printf("%d",!e);
    
}