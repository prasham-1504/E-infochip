#include <stdio.h>
int main(){
    char s[100]; int i,c=0,sp=0;
    fgets(s,100,stdin);
    for(i=0;s[i];i++){
        if(s[i]==' ') sp++;
        else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            if(!strchr("aeiouAEIOU",s[i])) c++;
    }
    printf("Consonants=%d Spaces=%d",c,sp);
}

