#include<stdio.h>

int main(){
	int a;
	printf("Enter a five digit number");
	scanf("%d",&a);
	int b =a%3;
	printf("The remainder obtained after dividing by 3 is %d\n",b);
}
