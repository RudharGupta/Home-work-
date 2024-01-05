#include<stdio.h>
void main()
{
    int a;
    int marks;
    printf("enter the marks");
    scanf("%d",&a);
    ch='x';
    printf("good writting");
    scanf("%c%c",'ch');
    if (ch=='x')
    {
        marks=a+10;
        printf("give extra 1o marks");
    }
    else
    {
printf("don't give extra marks");
    }
}