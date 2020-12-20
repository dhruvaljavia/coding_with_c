#include<string.h>
#include<stdio.h>
void main()
{
    char str[]="This is a string";
    printf("%d %d",strlen(str),sizeof(str)); //sizeof(str) = length + 1(of '\0')
}
