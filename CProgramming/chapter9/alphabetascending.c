#include <stdio.h>
#include <string.h>
int main(){
    char s[100],t;
    int i,j;
    gets(s);
    for(i=0;s[i];i++)
        for(j=i+1;s[j];j++)
            if(s[i]>s[j]) t=s[i],s[i]=s[j],s[j]=t;
    puts(s);
}

