#include<stdio.h>
void main()
{
    int a,b,c,big;
    printf("enter 3 number");
    scanf("%d%d%d",&a,&b,&c);
    big=a>b?a:b;
    big=b>c?b:c;
    printf("the greatest 3 digit no is=%d/n",big);
}





























