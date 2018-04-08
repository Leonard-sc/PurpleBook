#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define maxn 105
int main(){
    const double C=12.01;
    const double H=1.008;
    const double O=16;
    const double N=14.01;
    int T;
    char s[maxn];
    scanf("%d",&T);
    while(T--){
        scanf("%s",s);
        int n=strlen(s);
        double sum=0;
        int k=0;
        double t =0;
        for(int i=0;i<n;i++){
            if(isalpha(s[i])){
                sum=sum+t*k;
                if(s[i]=='C') t=C;
                if(s[i]=='H') t=H;
                if(s[i]=='O') t=O;
                if(s[i]=='N') t=N;
                if(i==n-1){
                    sum=sum+t;
                }
                k=1;
            }else{
                if(isdigit(s[i-1])){
                    k=k*10+(s[i]-'0');
                }else{
                    k=s[i]-'0';
                }
                if(i==n-1){
                    sum=sum+t*k;
                }
            }
        }
        printf("%.3f\n",sum);
    }
    // system("pause");
    return 0;
}