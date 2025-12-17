#include <stdio.h>
int main(){
    int a[3][3],i,j,s=0,t;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++) scanf("%d",&a[i][j]);
    for(j=0;j<3;j++) s+=a[0][j];
    for(i=1;i<3;i++){
        t=0; for(j=0;j<3;j++) t+=a[i][j];
        if(t!=s){ printf("Not Magic"); return 0; }
    }
    printf("Magic");
}

