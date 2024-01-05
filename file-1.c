#include<stdio.h>
void main(){
    int number[15]={1,2,3,4,5,6,7,8,9,10,12,33,45,78,899};
    int n;
        for(int i=1;i<15;i++){
        
    if(number[i]%2==0){
        printf("the number is even %d\n",number[i]);
    }
    else{
        printf("the number is odd %d\n",number[i]);
    }
        }
    }
