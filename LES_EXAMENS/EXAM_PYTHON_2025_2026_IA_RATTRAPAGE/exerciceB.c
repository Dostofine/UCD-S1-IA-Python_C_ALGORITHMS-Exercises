#include <stdio.h>
#include<math.h>
int n;
float X,S;
int main(){
    do{
        printf("saisir un entier n>0: ");
        scanf("%d",&n);
    }while(n<=0);
    printf("saisir un reel X: ");
    scanf("%f",&X);
    S=0;
    for(int i=1;i<=n;i++){
        S=S+i*(pow(X, i));
    }
    printf("la somme S=%f",S);
    return 0;
}