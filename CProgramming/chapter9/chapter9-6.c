#include<stdio.h>
#include<string.h>
int main(){
char str[ ]="Vijaynagar";
func(str+5) ;
}
func(char *str)
{
printf("%s\n",str) ;
}
