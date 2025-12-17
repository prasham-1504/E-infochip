#include<stdio.h>
#include<string.h>
char *combine(char *arr1,char *arr2);
int main(){
char * str=combine ("Suresh" , "Kumar") ;
puts(str) ;
}
char *combine(char *arr1,char *arr2)
{
char str[80];
int x,y,i,j;
x=strlen(arr1) ;
y=strlen(arr2) ;
strcpy(str,arr1) ;
for(i=x,j=0;j<x+y;i++,j++)
	str[i]=arr2[j];
str[i]='\0' ;
return(str);
}
