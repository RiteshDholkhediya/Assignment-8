#include<stdio.h>
#include<conio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            if(i<5){
                if(j==1 || j==i){
                    printf("* ");
                }
                else
                    printf("  ");
            }
            else
                printf("* ");
        }
        printf("\n\n");
    }
    return 0;
}