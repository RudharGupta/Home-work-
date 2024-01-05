#include<stdio.h>
void main()
{
    int number,i,sum=0,digit,cube;
    printf("enter the number:");
    scanf("%d",&number);
    for(i=0;number>0;i++){
        digit=number%10;
        cube=digit*digit*digit;
        sum+=cube;
        number/=10;
    }
    printf("sum of digit:%d\n",sum);
}