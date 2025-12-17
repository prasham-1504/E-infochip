#include<stdio.h>
int a=5,b=10;
int main(){
int x=20 ,*ptr=&x;
printf("%d ",*ptr);
change1(ptr) ;
printf("%d ",*ptr);
change2 (&ptr) ;
printf("%d\n",*ptr) ;
}
change1 (int *p)
{
p=&a;
}
change2(int **pp)
{
*pp=&b;
}
