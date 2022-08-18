#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,c,f,ch;
    for(i=1;i<=4;i++){
        c=1;
        f=1;
        ch='A';
        for(j=1;j<=7;j++){
            if(j>=i && j<=8-i){
                if(c<5-i  && f==1){
                    printf("%c ",ch);
                    ch++;
                    c++;
                }
                else{
                    f=0;
                    printf("%c ",ch);
                    ch--;
                }
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}