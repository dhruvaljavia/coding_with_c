#include<stdio.h>
void main()
{
    char a[] = {'a','b','c','d',' '};
    char b[] = {'a','b','c','d','\0'};
    printf("%s\n",a);
    printf("%s\n",b);
    printf("%c%c%c%c",'a','\0','b',' ','c');
}
