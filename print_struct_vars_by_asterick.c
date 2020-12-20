#include<stdio.h>
struct z
{
    int a;
    char ch;
    int q[4];
};
void main( )
{
    struct z abc;
    int i;
    abc.a=555;
    abc.ch='z';
    for(i=0;i<4;++i)
        abc.q[i]=i+1;
    struct z *p;
    p=&abc;
    printf("%d %c\n",(*p).a,(*p).ch);
    printf("%d %c %d %d %d %d",*p);
}
