#include<stdio.h>
void main()
{
    int x,y,z;
    int a=printf("This is a c program");
    int b=scanf(" %d %d %d",&x,&y,&z);
    printf("%d %d",a,b);//Prints no. of characters in "This is a c program"(19) and the no. of successful read operations(3)
}
