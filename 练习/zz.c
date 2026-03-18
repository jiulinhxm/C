#include <stdio.h>

int fz(void *pi)
{
    int *pc = (int *)pi;
    printf("%d\n",*pc);
}

int main()
{
    int i = 123;
    int *pi = &i;

    printf("%d\n",*pi);

    i =456;
    fz(&i);

    int a,b;
    int c=sizeof( &a -&b);

    printf("%d\n",c);

    int **pn = &pi;

    int *zarr[10];
    printf("%ld\n",sizeof(zarr));
    
    zarr[4] = &i;

    printf("%d\n",*zarr[4]);

    int an[10] = {0,1,2,3,4,5,6,7,8,9};
    
    int (*pa)[10] = &an;
    printf("%d\n",*(*pa+4));

    int (*pf)() = &fz;
    (*pf)(&i);

    char *ch = "Hello";
    for(i=0;i<5;i++)
    {
        printf("%c\t",*(ch+i));
    }
}