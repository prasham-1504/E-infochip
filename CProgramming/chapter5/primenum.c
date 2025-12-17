#include<stdio.h>

int main(){
int i,j,flag;
printf("The prime number less than 100 are");
for(i=2;i<=99;i++){
flag =1;
for(j=2;j*j<=i;j++){
if(i%j==0){
flag =0;
break;
}
}
if(flag){
printf("%d\t",i);
}
}
return 0;
}
