#include<stdio.h>
struct z
{
    double f;
    char ch;
};

void main()
{
    struct z abc;
    printf("%d %d",sizeof(abc),sizeof(abc.ch));
}
