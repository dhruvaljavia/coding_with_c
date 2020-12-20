#include<stdio.h>
void main()
{
    int a=23;
    int b=7;
    float f1 = (float)a/b;//Prevents the implicit conversion from float to int
    float f2 = a/b;
    printf("%f %f",f1,f2);
}
