#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)==3){
        int flag = 10000; //max
        for(int i=10;i<=100;i++){
            if(i%3==a&&i%5==b&&i%7==c){
                if(i<flag){
                    flag=i;
                }
            }
        }
        if(flag==10000){
            printf("No Answer");
        }else{
            printf("%d ",flag);
        }
        printf("\n");
    }
    return 0;
}