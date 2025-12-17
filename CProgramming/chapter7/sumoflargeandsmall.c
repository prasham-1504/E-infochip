#include <stdio.h>
int main(){
    int n,x,min,max,i;
    scanf("%d",&n);
    scanf("%d",&x); min=max=x;
    for(i=1;i<n;i++){
        scanf("%d",&x);
        if(x<min) min=x;
        if(x>max) max=x;
    }
    printf("%d",min+max);
}

