#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char s[]="~1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main(){
    int c,i;
    while((c=getchar())!=EOF){
        for(i=0;s[i]&&s[i]!=c;i++);
        if(s[i]) printf("%c",s[i-1]);
        else putchar(c);
    }
    system("pause");
    return 0;
}