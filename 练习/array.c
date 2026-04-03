#include <stdio.h>

int main()
{
   int arr[10] = {0,1,2,3,4,5,6,7,8,9};
   
   printf("%d\n",arr[0]);

   arr[5] =101;

   int i;
   for(i=0;i<10;i++)
   {
        printf("%d\n",arr[i]);
   }

    int shuZu[3][3] = {{0,1,2},{3,4,5},{6,7,8}};
    
    int (*pa)[10] = &arr;
    printf("%d",**(pa));
}