#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void main()
{
    srand(time(NULL));
    printf("%d",rand()%1000);
}
