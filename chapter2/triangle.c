#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    while(scanf("%d",&n)==1){
        int max=1;
        for(int i=0;i<n-1;i++){
            max=max+2;
        }
        int temp=max;
        for(;temp>=1;temp=temp-2){
            for(int i=0; i<((max-temp)/2);i++){//计算该行缩进并输出
                printf(" ");
            }
            for(int i=0;i<temp;i++){
                printf("#");
            }
            printf("\n");
        }
    }
    return 0;
}