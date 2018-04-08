#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxn 100005
int main(){
    int T,n;
    int ans[maxn];
    memset(ans,0,sizeof(maxn));
    for(int m=1;m<=maxn;m++){
        int x=m,y=m;
        while(x>0){
            y+=x%10;
            x=x/10;
        }
        if(ans[y]==0||m<ans[y]) ans[y]=m;
    }
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        printf("%d\n",ans[n]);
    }
    system("pause");
    return 0;
}