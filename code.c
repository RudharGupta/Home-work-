#include<stdio.h>
void main()
{
    int a,b,c,d,big;
    printf("greatest 4 number");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    big=a>b?(a>c?(a>d?a:d):(c>d?c:d)):(b>c?(b>d?b:d):(c>d?c:d));
    printf("the greatest 4 digit  no is=%d\n",big);
}