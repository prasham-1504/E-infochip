#include<stdio.h>
int *ptr;
int main(){
func(); 
printf("%d\n",*ptr);
}
func()
{
int num=10;
ptr=&num;
}
