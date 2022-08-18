#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,c,f,ch,k;
    for(i=1;i<=7;i++){
        c=1;
        f=1;
        ch='A';
        k=1;
        for(j=1;j<=13;j++){
            if(j<=8-i || j>=6+i){
                if(c<8-i  && f==1){
                    printf("%c ",ch);
                    ch++;
                    c++;
                }
                else{
                    f=0;
                    
                    printf("%c ",ch);
                    if(k && i>1){
                        ch++;
                        k=0;
                    }
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