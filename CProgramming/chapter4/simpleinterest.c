#include<stdio.h>

int main(){
	int p,n,r,interest;
	printf("Enter the principal amount , Time and Rate of Interest");
	scanf("%d %d %d",&p,&r,&n);
	interest = (p*n*r)/100;
	printf("the simple interest is %d\n",interest);
}
