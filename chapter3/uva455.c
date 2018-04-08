#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxn 120
int main(){
    int T;
    char s[maxn];
    scanf("%d",&T);
    while(T--){
        scanf("%s",s);
        int len = strlen(s);
        int i=1;
        int k;
        for(;i<=len;i++){
            if(len%i==0){
                int flag=1;
                for(int j=i;j<len;j++){
                    if(s[j]!=s[j%i]){
                        flag=0;
                        break;
                    }
                }
                if(flag==1){
                    printf("%d\n",i);
                    if(T){
                        printf("\n");
                    }
                    break;
                }
            }
        }
    }
    // system("pause");
    return 0;
}