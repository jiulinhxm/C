#include <stdio.h>

int main()
{
    struct{
        char name[10];
        int age;
        double height;
        double width;
    }s;


    s.height =  1.78;
    s.age = 20;
    int i;
    for(i=0; i<10;i++)
    {
        s.name[i] = 0;
    }
    s.name[0] = 'J';
    s.name[1] = 'o';
    s.name[2] = 'h';
    s.name[3] = 'n';

    printf("%s",s.name);

    struct person {
        char a;
        int b;
        double f;
    };

    struct person timmy = {'a',12,3.14};
    printf("%d\n",timmy.b);
    printf("%c\n",timmy.a);
    printf("%lf\n",timmy.f);

    struct person *pTimmy = &timmy;
    
    (*pTimmy).a ='b';
    printf("%c\n",timmy.a);
    printf("%lf\n",pTimmy -> f);

    union{
        struct person;
    }c;

    
}   