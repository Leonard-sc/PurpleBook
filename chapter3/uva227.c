#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char puzzle[5][5];
    char operate[100];
    int round=1;
    while(1){
        int blank_x=0;
        int blank_y=0;
        gets(puzzle[0]);
        // printf("this round puzzle0's len=%d\n",strlen(puzzle[0]));
        if(strlen(puzzle[0])==1){
            // printf("len=1!!!!!\n");
            break;
        }
        gets(puzzle[1]);
        gets(puzzle[2]);
        gets(puzzle[3]);
        gets(puzzle[4]);
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                if(puzzle[i][j]==' '){
                    blank_x=i;
                    blank_y=j;
                } 
            }
        }
        gets(operate);
        int len=strlen(operate);
        int error=0;
        for(int i=0;i<len;i++){
            if(error==0){
                if(operate[i]=='A'){
                    if(blank_x==0){
                        error=1;
                    }else{
                        puzzle[blank_x][blank_y]=puzzle[blank_x-1][blank_y];
                        puzzle[blank_x-1][blank_y]=' ';
                        blank_x--;
                    }
                }else if(operate[i]=='B'){
                    if(blank_x==4){
                        error=1;
                    }else{
                        puzzle[blank_x][blank_y]=puzzle[blank_x+1][blank_y];
                        puzzle[blank_x+1][blank_y]=' ';
                        blank_x++;
                    }
                }else if(operate[i]=='R'){
                    if(blank_y==4){
                        error=1;
                    }else{
                        puzzle[blank_x][blank_y]=puzzle[blank_x][blank_y+1];
                        puzzle[blank_x][blank_y+1]=' ';
                        blank_y++;
                    }
                }else if(operate[i]=='L'){
                    if(blank_y==0){
                        error=1;
                    }else{
                        puzzle[blank_x][blank_y]=puzzle[blank_x][blank_y-1];
                        puzzle[blank_x][blank_y-1]=' ';
                        blank_y--;
                    }
                }
            }
            if(operate[i]=='0') {
                printf("Puzzle #%d:\n",round);
                if(error==1){
                    printf("This puzzle has no final configuration.\n");
                }else{
                    for(int row=0;row<5;row++){
                        for(int col=0;col<5;col++){
                            printf("%c ",puzzle[row][col]);
                        }
                        printf("\n");
                    }
                }
                printf("\n");
            }
        }
        round++;
    }
    // system("pause");
    return 0;
}
