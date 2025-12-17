#include<stdio.h>
#include<math.h>

int main(){
int n,i,x,sum=0;
printf("Enter number of terms");
scanf("%d",&n);
printf("Enter x");
scanf("%d",&x);
for(i=1;i<=n;i++){
if(i%2==0){
sum-= pow(x,i);
}else{
sum+= pow(x,i);
}
}
printf("Sum is %d\n",sum);
}
