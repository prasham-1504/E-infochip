#include<stdio.h>
int main(){
int i=0;
char name [10] = { 'M' , 'o' , 'h' , 'i' , 'n' , 'i', '\0' };
while(name[i])
{
printf("%c",name[i]) ;
i++;
}
}
