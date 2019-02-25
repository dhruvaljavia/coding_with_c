#include<string.h>
#include<stdio.h>
void main()
{
    int mth ,yr,dd=1,mm=1,yy=1900,day=0,flg=0;
    int cal[6][7];
    int end=31,i,j,p=0,ctr=0;
    char smth[15];

    printf("Enter the year(>=1900) :");
    scanf("%d",&yr);
    printf("Enter the month :");
    scanf("%s",&smth);
    printf("\n");

    if(yr<1900)
        yr=1900;

    if(stricmp(smth,"january")==0)
        mth=1;
    else if(strcmp(smth,"february")==0)
        mth=2;
    else if(strcmp(smth,"march")==0)
        mth=3;
    else if(strcmp(smth,"april")==0)
        mth=4;
    else if(strcmp(smth,"may")==0)
        mth=5;
    else if(strcmp(smth,"june")==0)
        mth=6;
    else if(strcmp(smth,"july")==0)
        mth=7;
    else if(strcmp(smth,"august")==0)
        mth=8;
    else if(strcmp(smth,"september")==0)
        mth=9;
    else if(strcmp(smth,"october")==0)
        mth=10;
    else if(strcmp(smth,"november")==0)
        mth=11;
    else if(strcmp(smth,"december")==0)
        mth=12;
    else
    {
        mth=1;
        strcpy(smth,"january");
    }

        //SETTING THE YEAR DAY
        while(yy<yr)
        {
                flg=0;
                if(yy%100==0)
                  {
                    if(yy%400==0)
                    flg=1;
                  }
                else if(yy%4==0)
                    flg=1;

                if(flg==0)
                    day=(day+1)%7;
                else
                    day = (day+2)%7;
                ++yy;
        }

        //SETTING LEAP YEAR FLAG
        flg=0;
        if(yy%100==0)
        {
            if(yy%400==0)
            flg=1;
        }
        else if(yy%4==0)
            flg=1;

        //SETTING THE MONTH DAY
        while(mm!=mth)
        {
            ++mm;
            if(mm==3&&flg==1)
            {
                day = (day+29)%7;
                end=31;
            }
            else if(mm==3&&flg==0)
              {
                  day = (day+28)%7;
                  end=31;
              }
            else if(mm==9||mm==8)
                {
                    day=(day+31)%7;
                    if(mm==8)
                        end=31;
                    else
                        end=30;
                }
            else if(mm%2==0)
                {
                    day=(day+31)%7;
                    if(mm==2&&flg==1)
                    end=29;
                    else if(mm==2&&flg==0)
                        end=28;
                    else
                        end=30;
                }
            else
                {
                    day=(day+30)%7;
                    end=31;
                }
        }

        printf("The calendar for the year %d of the month %s is :\n\n",yr,smth);
        printf("Mon    Tue    Wed    Thu    Fri    Sat    Sun \n");

        //FILLING DATES IN MATRIX CAL
        for(i=0;i<6;++i)
        {
            for(j=0;j<7;++j)
            {
                if(i==0&&j==day)
                    ++ctr;
                else if(i==0&&j<day)
                    cal[i][j]=0;

                if(ctr==1)
                {
                    if(p<end)
                    {
                        ++p;
                        cal[i][j]=p;
                    }
                    else
                    {
                        cal[i][j]=0;
                        ctr=0;
                    }
                }
                else
                    cal[i][j]=0;
            }
        }

        //PRINTING THE DATES
         for(i=0;i<6;++i)
        {
            for(j=0;j<7;++j)
            {
                    if(cal[i][j]==0)
                        printf("       ");
                    else
                        printf("%02d     ",cal[i][j]);
            }
            printf("\n");
        }
}
