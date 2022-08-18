#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,c=0;
    for(i=0;i<=8;i++){
        if(i>8/2){
            c++;
        }
        for(j=0;j<=8;j++){
            if(i<=8/2){
                if(j>=4-i && j<=4+i){
                    printf("*");
                }
                else
                    printf(" ");
            }
            else{

                if(j>=i-4 && j<= 8-c)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}