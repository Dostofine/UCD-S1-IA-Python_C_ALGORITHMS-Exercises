#include <stdio.h>
#include <stdbool.h>
float T[10],X;
bool verifier;
int main(){
    for(int i=0;i<10;i++){
        printf("saisir le nombre %d: ",i+1);
        scanf("%f",&T[i]);
    }
    verifier=false;
    printf("saisir un nombre pour chercher: ");
    scanf("%f",&X);
    for(int i=0;i<10;i++){
        if(T[i]==X)
            verifier=true;
    }
    if(verifier==true)
        printf("%f existe au moins une fois.",X);
    else
        printf("%f n'existe pas dant le tableau.",X);
    return 0;
}
