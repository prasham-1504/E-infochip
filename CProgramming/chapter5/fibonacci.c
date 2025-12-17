#include<stdio.h>

int main(){
int n,a=0,b=1,c;
printf("Enter a number");
scanf("%d",&n);
while(b<n){
c=a+b;
a=b;
b=c;
}
if (b==n || n==0)
	printf("%d is fibonacci number",n);
else
        printf("%d is not fibonacci number",n);

return 0;
}
