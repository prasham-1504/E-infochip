#include<stdio.h>
int main(){
int arr[5] = {1,2,3,4,5};
int *p=&arr;
printf("p is %u\t",p);
func1( p);
printf("p is %u\t",p);
func2( &p);
printf("p is %u\t",p);
}
void func1 (int *ptr)
{
ptr++;
}
void func2 (int **pptr)
{
(*pptr)++;
}
