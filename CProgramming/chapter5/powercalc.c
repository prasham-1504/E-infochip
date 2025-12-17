#include<stdio.h>

int main(){
int x,y,i;
long result=1;
printf("Enter two number x and y");
scanf("%d %d",&x,&y);
for(i=1;i<=y;i++){
result *=x;
}
printf("%d^%d = %ld\n",x,y,result);
return 0;
}
