#include<stdio.h>
#include<string.h>
int main(){
char *str="doubtful";
func(str);
}
func (char *p)
{
if (*p != 'f' )
{
printf("%c",*p) ;
func(++p);
}
}
