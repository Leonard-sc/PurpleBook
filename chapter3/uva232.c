#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int r,c;
    int round = 1;
    while(1){
        //TODO:输入0时判断结束
        scanf("%d",&r);
        if (r==0) break;
        scanf("%d",&c);
        // getchar();
        char puzzle[20][20];
        char across[100][20];
        char down[100][20];
        for(int i=0;i<r;i++){
            scanf("%s",puzzle[i]);
        }
        // for(int i=0;i<r;i++){
        //     printf("%d:%s\n",i,puzzle[i]);
        // }
        if (round!=1){
            printf("\n");
        }
        printf("puzzle #%d:\n",round);
        int num=1;
        int across_i=0;
        int down_i=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if((i==0&&puzzle[i][j]!='*')||(j==0&&puzzle[i][j]!='*')||(i!=0&&puzzle[i-1][j]=='*'&&puzzle[i][j]!='*')||(j!=0&&puzzle[i][j-1]=='*'&&puzzle[i][j]!='*')){
                    if(j==0||puzzle[i][j-1]=='*'){
                        char temp[20];
                        sprintf(temp,"%3d.",num);
                        int temp_i = strlen(temp);
                        for(int jj=j;jj<c;jj++){
                            if(puzzle[i][jj]!='*'){
                                temp[temp_i]=puzzle[i][jj];
                                temp_i++;
                            }else{
                                break;
                            }
                        }
                        temp[temp_i]='\0';
                        strcpy(across[across_i],temp);
                        across_i++;
                    }
                    if(i==0||puzzle[i-1][j]=='*'){
                        char temp[20];
                        sprintf(temp,"%3d.",num);
                        int temp_i = strlen(temp);
                        for(int ii=i;ii<r;ii++){
                            if(puzzle[ii][j]!='*'){
                                temp[temp_i]=puzzle[ii][j];
                                temp_i++;
                            }else{
                                break;
                            }
                        }
                        temp[temp_i]='\0';
                        strcpy(down[down_i],temp);
                        down_i++;
                    }
                    num++;
                }
            }
        }
        printf("Across\n");
        for(int i=0;i<across_i;i++){
            printf("%s\n",across[i]);
        }
        printf("Down\n");
        for(int i=0;i<down_i;i++){
            printf("%s\n",down[i]);
        }
        round++;
    }

    // system("pause");
    return 0;
}