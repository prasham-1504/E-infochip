#include<stdio.h>

int main(){
	int m1,m2,m3,m4,m5,avg;
	printf("Enter marks of five subjects : ");
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	avg = (m1+m2+m3+m4+m5)/5;
	printf("The average of marks is %d\n",avg);
}	
