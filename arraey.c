#include<stdio.h>
void main(){
    int [i];
    int arr[100];
    int length= sizeof(arr)/sizeof(arr[0]);
    int max[i] = arr[0];
    printf("enter values");
    scanf("%d",arr);
    for(int i=0;i<length;i++){
        if(arr[i] > max)
        max[i] = arr[i];
    printf("largest element present in given array:%d\n");
}