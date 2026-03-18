#include <stdio.h>
#define N 1
// #define M

int f();
int f_d();

#if N == 0
    int f()
    {
        printf("if true\n");
    }
#elif  N == 1
    int f()
    {
        printf("elif\n");
    }
#else
    int f()
    {
        printf("if false\n");
    }
#endif

#ifdef M
    int f_d()
    {
        printf("ifdef\n");
    }
#endif

#ifndef M
    int f_d()
    {
        printf("ifndef \n");
    }
#endif

int main()
{
   f();
   f_d();
}