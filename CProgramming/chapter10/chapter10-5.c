#include<stdio.h>
int main(){
struct tag{
        int i;
        char c;
};
struct tag var={2,'s'};
func(var);
}
func (struct{int i;char c;} v)
{
printf("%d %c\n",v.i,v.c);
}

