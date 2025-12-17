#include<stdio.h>
int main(){
int a=5,b=8;
func (a,b);
printf ("a is %d and b is %d\n" , a, b) ;
}
func (int x,int y)
{
int temp;
temp=*(&x) ,*(&x)=*(&y) ,*(&y)=temp;
}
