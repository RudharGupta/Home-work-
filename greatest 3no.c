#include<stdio.h>
void main(){
int a,b,c;
printf("enter 3 number");
scanf("%d%d%d",&a,&b,&c);
if(a>b){
    if (a>c)
printf("the greatest number is=%d",a);
else 
printf("the greatest number is=%d",c);
}
else{
    if (b>c)
    printf("the greatest number is=%d",b);
    else 
printf("the number is=%d,c")
    }
}