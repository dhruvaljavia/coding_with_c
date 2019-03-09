#include<stdio.h>
void main()
{
    int i,n;
    double a;
    printf("Enter the no. whose square root is to be found : ");
    scanf("%d",&n);

    a=1.0;
    for(i=1;i<=10000;++i)
    {
        a=(a+n/a)/2;
    }

    printf("Square root : %lf",a);
}
