#include<stdio.h>
#include<math.h>
void main()
{
    int number,originalnumber,remainder,result=0,n=0,start,end;
    printf("enter an starting number:");
    scanf("%d",&start);
    printf("enter the ending number:");
    scanf("%d",&end);
    printf("armstrong number between %d and %d are:",start,end);
    for(number = start; number<=end;++number)
    {
        originalnumber=number;
        n=0;
        result=0;    
    while(originalnumber!=0){
        originalnumber/=10;
        ++n;
    }
    originalnumber=number;
     while(originalnumber!=0){
        remainder=originalnumber%10;
        result+=pow(remainder,n);
        originalnumber/=10;
     }
    if(result==number){
        printf("%d this is a armstrong number\n",number);
    
    }
    }
    printf("%d\n");
    
} 
