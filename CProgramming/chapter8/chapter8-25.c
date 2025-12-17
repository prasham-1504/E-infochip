#include<stdio.h>
int main(){
int arr[3][4];
printf("%u\t",arr);
printf("%u\t",arr[0]) ;
printf("%u\n" ,&arr[0][0]);
printf("%d\t",sizeof(arr)) ;
printf("%d\t",sizeof(arr[0])) ;
printf ("%d\n", sizeof (arr[0][0]));
}
