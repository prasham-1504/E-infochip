#include <stdio.h>
int main(){
    int a[4][4],i,j;
    for(i=0;i<4;i++)
        for(j=0;j<4;j++) scanf("%d",&a[i][j]);
    for(i=0;i<4;i++){
        for(j=3;j>=0;j--) printf("%d ",a[i][j]);
        printf("\n");
    }
}

