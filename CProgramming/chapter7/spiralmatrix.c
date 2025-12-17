#include <stdio.h>
int main(){
    int a[3][3],i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++) scanf("%d",&a[i][j]);
    for(j=0;j<3;j++) printf("%d ",a[0][j]);
    for(i=1;i<3;i++) printf("%d ",a[i][2]);
    for(j=1;j>=0;j--) printf("%d ",a[2][j]);
    printf("%d",a[1][0]);
}

