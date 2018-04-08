#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int m,n;
    float sum=0;
    while(scanf("%d%d",&n,&m)==2){
        if(m==0&&n==0) break;
        for(;n<=m;n++){
            sum+=1/pow(n,2);
        }
        printf("%.5f\n",sum);
        sum=0;
    }
    system("pause");
    return 0;
}