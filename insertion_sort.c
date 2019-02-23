#include<stdio.h>
void main()
{
    int n,i,j,k,x,y;
    printf("Enter the array size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the numbers : ");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);

    for(i=1;i<n;++i)
    {
        for(j=i;j>0;--j)
        {
            if(a[j-1]<=a[i])
                break;
        }

        x=a[i];
        for(k=j;k<=i;++k)
        {
            y=a[k];
            a[k]=x;
            x=y;
        }

    }

    printf("Sorted array : \n");
     for(i=0;i<n;++i)
        printf("%d ",a[i]);
}
