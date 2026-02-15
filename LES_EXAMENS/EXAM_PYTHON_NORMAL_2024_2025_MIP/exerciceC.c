#include <stdio.h>
#include <math.h>
int N,S;
int main(){
    do{
        printf("saisir un entier N>0: ");
        scanf("%d",&N);
    }while(N<=0);
    S=0;
    for(int i=1;i<=N;i++){
        S=S+pow(i,2);
    }
    printf("la somme S=%d\n",S);
    return 0;
}