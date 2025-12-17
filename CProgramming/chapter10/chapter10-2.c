#include<stdio.h>
int main(){
struct rec{
char *name;
int age;
}*ptr;
char name1[10] = "Somalika";
ptr->name=name1;
ptr->age=93;
printf("%s\t",ptr->name);
printf("%d\n",ptr->age) ;
}
