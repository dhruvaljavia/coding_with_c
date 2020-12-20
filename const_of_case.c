#define m 5
#include<stdio.h>
void main()
{
    int a;
    a:
     {
         printf("Enter 3 or 5 : ");
         scanf("%d",&a);
     }

    switch(a)
    {
    case 3:
        printf("You have entered 3");
        break;

    case m:
        printf("You have entered 5");
        break;

    default:
        printf("Do as I say!!\n");
        goto a;
    }
}
