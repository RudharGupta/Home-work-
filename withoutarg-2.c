#include<stdio.h>
void main(){
    int add();
    int a,b,c;
    c=add(a,b);
    printf("sum=%d",c);
}
int add(){
    int x,y;
    printf("enter two number");
    scanf("%d%d",&x,&y);
    int c=x+y;
    return c;
}