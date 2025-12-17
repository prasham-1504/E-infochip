#include <stdio.h>
int main(){
    char *s[5],buf[100];
    for(int i=0;i<5;i++){
        gets(buf);
        s[i]=strdup(buf);
    }
    for(int i=0;i<5;i++) puts(s[i]);
}

