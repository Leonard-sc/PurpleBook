#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define maxn 1010
int a[maxn];
int main(){
    int n,k,first=1;
    memset(a,0,sizeof(a));
    scanf("%d%d",&n,&k);
    for(int i=1;i<=k;i++){ //人下标
        for(int j=1;j<=n;j++){ //灯下标
            if(j%i==0){
                a[j]=!a[j];
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(a[i]){
            if(first){
                first=0;
            }else{
                printf(" ");
            }
            printf("%d",i);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}