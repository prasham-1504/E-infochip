#include<stdio.h>
int main(){
int i , arr [3] [4] ={ { 10 , 11 ,12 , 13 }, { 20 , 21 , 22 , 23 }, {30 , 31 , 32 , 33 } } ;
int *p=arr;
for(i=0;i<12;i++)
printf("%d ",p[i]);
printf ("\n");
}
