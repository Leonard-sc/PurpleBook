#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maxn 1010
int main(){
    char dna[maxn][maxn];
    int T;
    scanf("%d",&T);
    while(T--){
        int n,len;
        scanf("%d%d",&n,&len);
        for(int i=0;i<n;i++){
            scanf("%s",dna[i]);
        }
        int con_error = 0;
        char con_str[maxn];
        memset(con_str,0,sizeof(con_str));
        for(int j=0;j<len;j++){
            int A,T,C,G;
            A=T=C=G=0;
            for(int i=0;i<n;i++){
                switch(dna[i][j]){
                    case 'A':
                        A++;
                        break;
                    case 'T':
                        T++;
                        break;
                    case 'C':
                        C++;
                        break;
                    case 'G':
                        G++;
                        break;
                }
            }
            if(A>=T&&A>=C&&A>=G){//有相同时要求字典顺序A-C-G-T
                strcat(con_str,"A\0");
                con_error += T+C+G;
            }else if(C>=A&&C>=T&&C>=G){
                strcat(con_str,"C\0");
                con_error += A+T+G;
            }else if(G>=A&&G>=T&&G>=C){
                strcat(con_str,"G\0");
                con_error += A+T+C;
            }else if(T>=A&&T>=C&&T>=G){
                strcat(con_str,"T\0");
                con_error += A+C+G;
            }
        }
        printf("%s\n",con_str);
        printf("%d\n",con_error);
    }
    // system("pause");
    return 0;
}