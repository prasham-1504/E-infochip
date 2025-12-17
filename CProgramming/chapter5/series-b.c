#include<stdio.h>

int main(){
int n,i,term=1,sum=0;
printf("Enter number of terms");
scanf("%d",&n);
for(i=1;i<=n;i++){
sum+=term;
term=term*10+1;
}
printf("Sum =%d\n",sum);
}
