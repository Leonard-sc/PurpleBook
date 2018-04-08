#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxn 100000
int main(){
    int T,N;
    int sum[10];
    scanf("%d",&T);
    while(T--){
        memset(sum,0,sizeof(sum));
        scanf("%d",&N);
        for(int i=1;i<=N;i++){
            int x=i;
            do{
                int temp=x%10;
                sum[temp]++;
                x=x/10;
            }while(x!=0);
        }
        for(int i=0;i<=9;i++){
            if (i!=9) printf("%d ",sum[i]);
            else printf("%d",sum[i]);
        }
        printf("\n");
    }
    // system("pause");
    return 0;
}