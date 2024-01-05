 #include<stdio.h>
 void main(){
    int add(int,int);
    int sub();
    void mul(int,int);
    void div();
    int a,b,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("sum=%d\n",c);
    c=sub();
    printf("subract=%d\n",c);
    mul(a,b);
    div();
 }
 int add(int x,int y){
    int c=x+y;
    return c;
 }
 int sub()
 {
    int x,y;
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
    int z=x-y;
    return z;
 }
 void mul(int x, int y){
    int c=x*y;
    printf("mul=%d\n",c);
 }
 void div(){
    int x,y;
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
    if(y!=0){
     int c=x/y;
printf("div=%d",c);
    }
    else{
        printf("infinite");
    }
 }
 
 