#include<stdio.h>
#include<stdlib.h>
typedef struct {char name[30]; int age;}stu;
typedef struct {int data;node *link;}node;
int main(){
stu *p=malloc(sizeof(stu));
node  *ptr=malloc(sizeof(node));
p->age=30;
ptr->data=3;
print f (" %d %d \n" , p->age, ptr->data) ;
}
