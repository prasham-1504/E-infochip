#include<stdio.h>

int main(){
int n,i,term=1,sum=0,diff=1;
printf("Enter number of terms");
scanf("%d",&n);
for(i=1;i<=n;i++){
sum+=term;
term+=diff;
diff++;
}
printf("Sum is %d\n",sum);
}
