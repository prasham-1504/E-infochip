#include <stdio.h>
int main(){
    int a[10],n,i,j,f=1;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(a[i]==a[j]) f=0;
    printf(f?"Distinct":"Not Distinct");
}

