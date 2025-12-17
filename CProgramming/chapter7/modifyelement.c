#include <stdio.h>
int main(){
    int a[10],n,k,i,t;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    while(k--){
        t=a[n-1];
        for(i=n-1;i>0;i--) a[i]=a[i-1];
        a[0]=t;
    }
    for(i=0;i<n;i++) printf("%d ",a[i]);
}

