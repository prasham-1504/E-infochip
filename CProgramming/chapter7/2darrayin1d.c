#include <stdio.h>
int main(){
    int a[3][3],b[9],i,j,k=0;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++) scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
        for(j=0;j<3;j++) b[k++]=a[i][j];
    for(i=0;i<9;i++) printf("%d ",b[i]);
}

