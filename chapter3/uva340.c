#include <stdio.h>
#include <stdlib.h>
#define maxn 1010
int main(){
    int n,a[maxn],b[maxn];
    int kase=0;//game round
    while(scanf("%d",&n)==1&&n){//n=0时结束
        printf("Game %d:\n",kase);
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(;;){
            int A=0,B=0;
            for(int i=0;i<n;i++){
                scanf("%d",&b[i]);
                if(a[i]==b[i]){
                    A++;//统计数字位置正确的
                }
            }
            if(b[0]==0) break;//规定了正常数列中不会有0，有0(全0)则代表本轮结束
            for(int d=1;d<=9;d++){
                int c1=0,c2=0;//统计数字d在原串和预测串中的出现次数
                for(int i=0;i<n;i++){
                    if(a[i]==d) c1++;
                    if(b[i]==d) c2++;
                }
                if(c1<c2) B+=c1;
                else B+=c2;
            }
            printf("    (%d,%d)\n",A,B-A);
        }
    }
    system("pause");
    return 0;
}