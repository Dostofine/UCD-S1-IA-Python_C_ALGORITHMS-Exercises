#include <stdio.h>
int N_pair,N_impair,N_total,N;
int main(){
    while(1){
        printf("saisir un nombre entier positif: ");
        scanf("%d",&N);
        if(N>=0){
            N_total++;
            if(N%2==0){
                N_pair++;
            }
            else{
                N_impair++;
            }
        }
        else
            break;
    }
    printf("le nombre total d’entiers saisis est %d\n",N_total);
    printf("le nombre d’entiers pairs est %d\n",N_pair);
    printf("le nombre d’entiers impairs est %d\n",N_impair);
    return 0;
}