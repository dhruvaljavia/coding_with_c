#include<stdio.h>
void main()
{
    char a[100];
    printf("Enter a string : \n");
    gets(a);
    printf("Entered string : \n");
    puts(a);
    printf("Enter another string : \n");
    scanf("%4s",a);
    printf("Entered string : \n");
    puts(a);
}
