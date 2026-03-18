#include <stdio.h>
#include "state2.c"

extern int a;
extern int s_f();

int function()
{
    static int a=0;
    a+=1;
    printf("%d\n",a);
}

int main()
{
    
    function();
    function();
    function();
    function();
    function();

    s_f(a);
}