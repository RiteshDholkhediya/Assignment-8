#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,c,f,ch='A';
    for(i=1;i<=5;i++){
        c=1;
        f=1;
        ch='A';
        for(j=1;j<=9;j++){
            if(j>=6-i && j<=4+i){
                if(c<i){
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