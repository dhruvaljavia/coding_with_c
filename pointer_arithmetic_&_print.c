#include<stdio.h>
void main()
{
    int a[]={5,4,8};
    int* x = a;
    double* y = (double*)a;
    printf("%d\n",*x);
    printf("%d\n",*y);
    ++x;
    printf("%d\n",*x);
    ++y;
    printf("%d\n",*y);
    printf("%d %d",*y,*x);
}
