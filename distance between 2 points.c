#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,e;
printf("enter the variable=");
scanf("%f%f%f%f",&a,&b,&c,&d);
e=sqrt((b-a)*(b-a)+(d-c)*(d-c));
printf("the distance between 2 points=%f",e);
}