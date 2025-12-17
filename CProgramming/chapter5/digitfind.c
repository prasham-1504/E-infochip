#include<stdio.h>

int main(){
int n,digit,count=0,temp;
printf("Enter the number");
scanf("%d",&n);
printf("Enter the digit");
scanf("%d",&digit);
temp=n;
while(temp>0){
if(temp%10==digit){
count++;
}
temp=temp/10;
}
if(count>0){
printf("Digit %d occurs %d times\n",digit,count);
}
else{
printf("Digit %d not found\n",digit);
}
}
