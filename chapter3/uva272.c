#include <stdio.h>
#include <stdlib.h>

int main(){
    int c,flag=1;//flag用于抉择输出左引号还是右引号
    while((c=getchar())!=EOF){
        if(c=='"'){
            printf("%s",flag?"``":"''");
            flag=!flag;
        }else{
            printf("%c",c);
        }
    }
    system("pause");
    return 0;
}