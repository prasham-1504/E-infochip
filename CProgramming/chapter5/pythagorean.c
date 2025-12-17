#include<stdio.h>

int main(){
int x,y,z;
printf("Enter pythagorean triphet less than 50:\n");
for(x=1;x<50;x++){
for(y=x;y<50;y++){
for(z=y;z<50;z++){
if(x*x+y*y==z*z){
printf("%d %d %d",x,y,z);
}
}
}
}
return 0;
}
