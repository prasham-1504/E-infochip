#include<stdio.h>
int main(){
int arr[5]={5,10,15,20,25};
func(arr);
}
func (int arr [])
{
int i=5, sum=0;
while(i>2)
sum=sum+arr[--i];
printf("sum is %d\n",sum);
}
