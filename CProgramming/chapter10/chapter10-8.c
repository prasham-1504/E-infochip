#include<stdio.h>
#include<string.h>
int main(){
union tag{
	char name[15];
	int age;
}rec;
strcpy(rec.name, "Sonalika");
rec.age=23;
printf ("Name = %s\n", rec.name);
}
