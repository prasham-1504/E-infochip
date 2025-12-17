#include <stdio.h>
int main(){
    char s[100];
    gets(s);
    printf("%c.",s[0]);
    for(int i=1;s[i];i++)
        if(s[i-1]==' ') printf("%c.",s[i]);
}

