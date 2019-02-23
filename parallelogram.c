#include<math.h>
#include<stdio.h>
void main()
{
    int a,b,d,x,i,j,k,l;

    printf("Enter the base length :");
    scanf("%d",&b);
    printf("Enter the side length :");
    scanf("%d",&a);
    printf("Enter the angle between two adjacent sides(in deg)(>=7) :");
    scanf("%d",&d);

    x=(int)(0.1+3.0/tan(0.01+d*3.141/180.0));

    for(i=0;i<=a;++i)
    {
        for(j=1;j<=(x*a)-(x*i);++j)
        printf(" ");

        for(k=0;k<=b;++k)
            if(i==0||i==a||k==0||k==b)
            printf("*   ");
            else
            printf("    ");

        for(l=1;l<=3;++l)
            printf("\n");
    }
}
