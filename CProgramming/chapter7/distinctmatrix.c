#include <stdio.h>
int main(){
    int a[3][3],i,j,x,y,f=1;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++) scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            for(x=0;x<3;x++)
                for(y=0;y<3;y++)
                    if(i!=x||j!=y)
                        if(a[i][j]==a[x][y]) f=0;
    printf(f?"Distinct":"Not Distinct");
}

