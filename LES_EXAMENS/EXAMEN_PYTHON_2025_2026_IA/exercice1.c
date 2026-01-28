#include <stdio.h>
#include <math.h>
int main(){
    int N,S;
    do{ 
        printf("saisir un entier N>0: ");
        scanf("%d",&N);
    }while(N<=0);
    S=0;
    for(int i=0;i<N;i++){
        S=S+pow((i+1), (i+1));
    }
    printf("S=%d\n",S);
}