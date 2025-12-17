#include <stdio.h>
#include <string.h>
int main(){
    char s[5][20],t[20];
    int i,j;
    for(i=0;i<5;i++) gets(s[i]);
    for(i=0;i<5;i++)
        for(j=i+1;j<5;j++)
            if(strcmp(s[i],s[j])>0)
                strcpy(t,s[i]),strcpy(s[i],s[j]),strcpy(s[j],t);
    for(i=0;i<5;i++) puts(s[i]);
}

