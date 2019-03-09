#include<string.h>
#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,j,m=0;


    printf("Enter the no. of data items : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the data :\n");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
        if(a[i]>=m)
            m=a[i];
    }

    printf("Histogram of data :\n");

    for(i=m;i>=1;--i)
    {
        for(j=0;j<n;++j)
        {
            if(a[j]>=i)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }

}
