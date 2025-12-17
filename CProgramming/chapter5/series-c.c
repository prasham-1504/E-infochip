#include<stdio.h>
#include<math.h>

int main(){
int n,i,x,sum=0;
printf("Enter number of terms");
scanf("%d",&n);
printf("Enter x");
scanf("%d",&x);
for(i=1;i<=n;i++){
sum+= pow(x,i);
}
printf("Sum is %d\n",sum);
}

