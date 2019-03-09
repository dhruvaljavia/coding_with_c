#include<stdio.h>

int n;

int det(int arr[][n])
{
    int xn=n;

    if(xn==2)
        return (arr[0][0]*arr[1][1] - arr[0][1]*arr[1][0]);

    else
    {
        int x[xn-1][xn-1];
        int sum=0,i,j,k,a=0,b=0,z;

        //runs through top nos.
        for(k=0;k<xn;++k)
        {
            //extracts sub matrix
            for(i=0;i<xn;++i)
            {
                for(j=0;j<xn;++j)
                {
                    if(i!=0 && j!=k)
                    {
                        x[a][b]=arr[i][j];
                        b=(++b)%(xn-1);
                        if(b==0)
                            ++a;
                    }
                }
            }

            a=b=0;

            //determines multiplier
            z=(k)%2;
            if(z==0)
                z=1;
            else
                z=-1;

            //Adds cofactor
            n=xn-1;
            sum=sum + arr[0][k]*z*det(x);
            n=xn;
        }
        return sum;
    }
}

void main()
{
    int i,j;

    printf("Enter the order of matrix : ");
    scanf("%d",&n);
    int a[n][n];

    printf("Enter the nos. : \n");
    for(i=0;i<n;++i)
        for(j=0;j<n;++j)
        {
            printf("[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }

    printf("Determinant : %d\n",det(a));

}
