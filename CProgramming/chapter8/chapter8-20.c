#include<stdio.h>
int main(){
int a=2,b=6;
func(a,&b);
printf ("a is %d, b is %d\n", a, b) ;
}
func (int x, int *y)
{
int temp;
temp=x;
x=*y;
*y=temp;
}
