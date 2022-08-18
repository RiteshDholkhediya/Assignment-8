#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,c=0;
    for(i=0;i<=12;i++){
        if(i>2){
                c++;
        }
        for(j=0;j<=18;j++){
           
            if(i<3){
                if((j>=2-i && j<=6+i) || (j>=12-i && j<=16+i)){
                    printf("*");

                }
                else
                    printf(" ");
            }

            else{

                if(j>=i-3 && j<=19-c){
                    if(i==3 && j==6){
                        printf("MySirG");
                    }
                    if(i==3 && (j>=6 && j<=11)){
                        continue;
                    }

                    printf("*");
                }
                else
                    printf(" ");
            }
            
        }
        printf("\n");
    }
    return 0;
}