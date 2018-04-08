#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxn 85
int main(){
    int T;
    char s[maxn];
    scanf("%d",&T);
    while(T--){
        scanf("%s",s);
        int n=strlen(s);
        int sum=0,o=1;
        for(int i=0;i<n;i++){
            if(s[i]=='O'){
                sum+=o;
                o++;
            }else{
                o=1;
            }
        }
        printf("%d\n",sum);
        o=1;
        sum=0;
    }
    // system("pause");
    return 0;
}