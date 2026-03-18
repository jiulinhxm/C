#include <stdio.h>
#define N 1
#define O printf
#define M(a,b) (a+b)/4
#define CC(m) #m
#define P(a,b) a ## b

#undef N
#define N 100

int  defineFunction()
{
    printf("define function\n");
}

int main()
{
    const  int abc = 123;
    // abc =456;
    const char *ch ;

    int a = N;
    O("N = %d\n",a);

    int c =  M(6,6);
    printf("%d\n",c);

    char str[10] =  CC(sadf);
    printf("%s\n",str);

    P(define,Function)();
}