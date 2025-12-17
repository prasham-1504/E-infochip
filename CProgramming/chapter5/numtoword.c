#include<stdio.h>
void printDigit(int d){
char *words[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
printf("%s\t",words[d]);
}
int main(){
int n,rev=0,digit;
printf("Enter a six digit number");
scanf("%d",&n);
int temp=n;
while(temp>0){
rev = rev*10+temp%10;
temp/=10;
}
while(rev>0){
digit=rev%10;
printDigit(digit);
rev/=10;
}
printf("\n");
return 0;
}
