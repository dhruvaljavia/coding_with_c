#include<stdio.h>
void main()
{
    int box[4][4];
    int i,j,a=3,b=3,an=3,bn=3,m,chk=0,ctr=0,moves=0;

    printf("Welcome to the game of puzzle 15!!!!\n");
    printf("Enter the initial configuration of nos. from 1-15 of the puzzle :\n");

    for(i=0;i<4;++i)
    {
        for(j=0;j<4;++j)
        {
            if(i!=3||j!=3)
            {
                printf("[%d][%d] :",i,j);
                scanf("%d",&box[i][j]);
            }
        }
    }
    box[3][3]=99;

    printf("Use 8,2,4 and 6 to move nos. up,down,left and right. Type 0 to end\n\n");

    for(;;)
    {
        for(i=0;i<4;++i)
       {
          for(j=0;j<4;++j)
          {
              if(box[i][j]!=99)
              printf("%02d " ,box[i][j]);
              else
                printf("   ");
          }
          printf("\n");
       }

        for(i=0;i<4;++i)
       {
          for(j=0;j<4;++j)
          {
              ++ctr;
              if(box[i][j]!=99)
              if(box[i][j]!=ctr)
              chk=1;
          }
       }

        if(chk!=1)
        {
            printf("YOU WON!!\n");
            printf("No. of moves : %d\n",moves);
            chk=ctr=0;
            break;
        }
        else
    {
        chk=ctr=0;
       printf("Move : ");
       scanf("%d",&m);
       if(m==0)
        break;
       else if(m==8)
        ++an;
       else if(m==2)
        --an;
       else if(m==4)
        ++bn;
       else if(m==6)
        --bn;
       else
       {
            printf("INVALID INPUT\n\n");
            continue;
       }

       if(an<=3&&bn<=3&&an>=0&&bn>=0)
       {
           box[a][b] = box[an][bn];
           box[an][bn]=99;
           a=an;
           b=bn;
           ++moves;
           printf("\n");
       }
       else
       {
           printf("INVALID MOVE\n\n");
           an=a;
           bn=b;
       }
    }
    }
}
