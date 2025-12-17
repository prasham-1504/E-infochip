#include<stdio.h>
main(){
static int x=5;
if(x>0)
{
printf("%d " ,x);
x--;
main ( ) ;
}
}
