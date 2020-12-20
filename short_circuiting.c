#include<stdio.h>
void main()
{
    int i=-1,j=-1,k=0,l=2,m;
    m = i++&&j++&&++k||l++;// l will not be evaluated as expression on left is true and OR is there
    printf("%d %d %d %d %d",i,j,k,l,m);
}
