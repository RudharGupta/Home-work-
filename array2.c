#include<stdio.h>
void main(){
    int n,sum=0;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n],sum1=0;
    printf("enter array element");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if (a[i]%2==0)
        sum=sum+a[i];
        else 
      sum1=sum1+a[i];
    }
        printf("sum of even array element=%d\n",sum);
  printf("sum of odd array element=%d\n",sum1);
}