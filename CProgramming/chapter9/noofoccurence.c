#include <stdio.h>
#include <string.h>
int main(){
    char s[200],w[50]; int c=0;
    gets(s); gets(w);
    char *p=strtok(s," ");
    while(p){ if(strcmp(p,w)==0) c++; p=strtok(NULL," "); }
    printf("%d",c);
}

