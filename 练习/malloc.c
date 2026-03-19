#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    void *p = malloc(sizeof(int)*n);
    if(p == NULL)
    {
        return 0;
    }
    int *pn = (int*)p;

    int i;
    for(i=0;i<n;i++)
    {
        *(pn+i) = 1;
    }

    for(i=0;i<n;i++)
    {
       printf("%d,%d\n",i,*(pn+i));
    }

    free(p);
}