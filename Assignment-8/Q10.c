#include<stdio.h>
#include<conio.h>
int main(){
    // int i,j;
    // for(i=1;i<=4;i++){
    //     for(j=1;j<=7;j++){
    //         if(j<=5-i  || j>=3+i){
    //             printf("* ");
    //         }
    //         else{
    //             printf("  ");
    //         }

    //     }
    //     printf("\n");
    // }
    int i,j,f,c,k;
    for(i=1;i<=4;i++){
        f=1;
        c=1;
        k=1;
        for(j=1;j<=7;j++){
           if(j<=5-i || j>=3+i){
                if(c<5-i && f==1){
                    printf("%d ",c);
                    c++;

                }
                else{
                    f=0;
                    printf("%d ",c);
                    if(c==(5-i) && k==1 && i>1){
                        k=0;
                    }
                    else{
                        c--;
                    }
                }
           }
           else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}