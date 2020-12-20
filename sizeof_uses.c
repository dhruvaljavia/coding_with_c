#include<stdio.h>
#include<stdlib.h>
int func(int z)
{
    printf("This is PDS%d",z);
    return z;
}

struct xyz
{
    int i;
    float f;
    char ch;
};

void main()
{
    int a[] = {5,6,7,8};
    printf("%d\n",sizeof(a));
    char* str1 = "Programming";
    printf("%d\n",sizeof(str1));
    char str2[]="Programming";
    printf("%d\n",sizeof(str2));
    int b[2][3];
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(func));
    printf("%d\n",sizeof(struct xyz));
    char* c;double** d;
    printf("%d %d\n",sizeof(c),sizeof(d));
    double* e[5];
    printf("%d\n",sizeof(e));
}
