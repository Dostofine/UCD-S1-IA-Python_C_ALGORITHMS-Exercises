#include <stdio.h>
float Un,Un_1,U0,U1;
int n;
int main(){
    do{
        printf("saisir un entier n>=0: ");
        scanf("%d",&n);
    }while(n<0);
    U0=1;
    U1=7;
    Un_1=U1;
    if(n==0){
        printf("%f",U0);
    }
    else{
        printf("%f ",U0);
        printf("%f ",U1);
        for(int i=0;i<=n-2;i++){
            Un=5*Un_1+2;
            printf("%f ",Un);
            Un_1=Un;
        }
    }
    return 0;
}