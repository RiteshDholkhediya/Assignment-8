#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,c,f;
    for(i=1;i<=4;i++){
        c=1;
        f=1;
        for(j=1;j<=7;j++){
            if(j>=i && j<=8-i){
                if(c<5-i && f==1){
                    printf("%d ",c);
                    c++;
                }
                else{
                    f=0;
                    printf("%d ",c);
                    c--;
                }

            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}