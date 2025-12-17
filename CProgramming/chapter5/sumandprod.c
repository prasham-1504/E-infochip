#include<stdio.h>

int main(){
int n,digit,esum=0,oprod=1;
printf("Enter six digit number");
scanf("%d",&n);
while(n>0){
digit=n%10;
if(digit%2==0){
esum+=digit;
}
else{
oprod*=digit;
}
n/=10;
}
printf("Sum of even digit is %d\n", esum);
printf("Product of odd digit is %d\n",oprod);
return 0;

}
