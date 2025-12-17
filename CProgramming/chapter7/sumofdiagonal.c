#include <stdio.h>
int main(){
    int a[3][3],i,p=0,s=0;
    for(i=0;i<3;i++)
        for(int j=0;j<3;j++) scanf("%d",&a[i][j]);
    for(i=0;i<3;i++){
        p+=a[i][i];
        s+=a[i][2-i];
    }
    printf("%d %d",p,s);
}

