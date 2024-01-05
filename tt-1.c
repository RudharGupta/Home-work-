#include<stdio.h>
void main(){
    int i,j,mat1[10][10],size=3,sr=0,sc=0,mat2,mat3;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("enter the elemnet mat1[%d][%d]",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    for(i=0;i<size;i++)
    {
        sr=sc=0;
        for(j=0;j<size;j++){
sr=sc+mat1[i][j];
sc=sc+mat1[j][i];
        }
        printf("%d:sr=%d and %d:sc%d",i,sr,i,sc);
    }
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("\n %d",mat1[i][j]);
        }
    }
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("enter the elemnet mat2[%d][%d]",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
         for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("enter the elemnet mat3[%d][%d]",i,j);
            scanf("%d",&mat2[i][j]);
        }
        }
         for(i=0;i<size;i++){
         for(j=0;j<size;j++){
            printf("enter the elemnet mat2[%d][%d]",i,j);
            scanf("%d",&mat2[i][j]);
        }
}