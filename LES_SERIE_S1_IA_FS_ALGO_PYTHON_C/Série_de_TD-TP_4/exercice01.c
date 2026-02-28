#include <stdio.h>
float somme,T[20];
int main(){
    somme=0;
    for(int i=0;i<20;i++){
        printf("saisir le nombre numero %d ",i+1);
        scanf("%f",&T[i]);
        somme+=T[i];
    }
    printf("la somme est %f.\n",somme);
    return 0;
}