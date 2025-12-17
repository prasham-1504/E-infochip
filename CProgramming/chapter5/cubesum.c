#include<stdio.h>

int main(){
int n,i,sum=0;
printf("Enter the number");
scanf("%d",&n);
for(i=1;i<n;i++){
if(i%3==0){
sum+=i*i*i;
}
}
printf("Sum of cube of number divisible by 3 are %d\n",sum);
}
