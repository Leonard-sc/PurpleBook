#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int a,b,c;
    int s,y;//商、余数
    while(scanf("%d%d%d",&a,&b,&c)==3&&a!=0&&b!=0&&c!=0){
        s=a/b;
        printf("%d.",s);
        y=a%b;//模拟手动除法
        for(int i=0;i<c;i++){
            if(i==(c-1)&&((y*10/b)>=5)){
                printf("%d",(y*10/b)+1);
            }else{
                printf("%d",y*10/b);
            }
            y=y*10%b; 
        }
                       
    }
    system("pause");
    return 0;
}