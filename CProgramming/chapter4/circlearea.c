#include<stdio.h>
#define PI 3.14
int main(){
float radius,area,perimeter;

printf("Enter the radius: ");
scanf("%f",&radius);

area = PI*radius*radius;

perimeter = 2*PI*radius;

printf("Area is %f\n", area);
printf("Perimeter is %f\n",perimeter);
}
