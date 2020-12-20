#include<stdio.h>
#include<stdlib.h>
void main()
{
   int* p = (int*)malloc(3*sizeof(int));
    p[0]=1;
    p[1]=2;
    p[2]=3;
    printf("%d %d",p[1],p[13]);
}
