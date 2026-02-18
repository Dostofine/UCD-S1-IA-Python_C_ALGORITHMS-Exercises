#include <stdio.h>
int N,somme;
int main(){
    somme=0;
    printf("saisir un entier: ");
    scanf("%d",&N);
    for(int i=1;i<N;i++){
        if(N%i==0){
            somme=somme+i;
        }
    }
    if(N==somme)
        printf("le nombre %d est parfait.\n",N);
    else
        printf("le nombre %d pas parfait.\n",N);
    return 0;
}