#include <math.h>
#include <stdio.h>
void main()
{
    int r,i,j,temp,dis;
    double d;

    printf("Enter the radius of circle to be printed: ");
    scanf("%d",&r);

    char circ[2*r+1][2*r+1];

    for(i=0;i<2*r+1;++i)
    {
        for(j=0;j<2*r+1;++j)
        {
            temp=(i-r)*(i-r)+(j-r)*(j-r);
            d=sqrt((double)temp);
            dis =(int)d;
            if(dis==r)
                circ[i][j]='*';
            else
            circ[i][j]=' ';

        }
    }

    for(i=0;i<2*r+1;++i)
    {
        for(j=0;j<2*r+1;++j)
        {
            printf("%c ",circ[i][j]);
        }
        printf("\n");
    }
}
