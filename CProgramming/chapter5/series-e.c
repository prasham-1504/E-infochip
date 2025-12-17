#include<stdio.h>
#include<math.h>

int main(){
int n,i,x;
double sum=0.0;
printf("Enter number of terms");
scanf("%d",&n);
printf("Enter x");
scanf("%d",&x);
for(i=1;i<=n;i++){
if(i%2==0){
sum-= 1/pow(x,i);
}else{
sum+= 1/pow(x,i);
}
}
printf("Sum is %.6lf\n",sum);
}

