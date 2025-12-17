#include<stdio.h>
#include<string.h>
int main(){
char str[]  = "Lucknow" ;
char *p=str;
p++;
p=p+2;
p[3]='t' ;
printf("%s %s\n", str,p);
}
