#include <stdio.h>
#include <stdbool.h>
int temp,T[10];
bool verifier;
int main(){
    for(int i=0;i<10;i++){
        printf("saisir l'entier numero %d: ",i+1);
        scanf("%d",&T[i]);
    }
    do{
        verifier=true;
        for(int i=0;i<9;i++){
            if(T[i]>T[i+1]){
                temp=T[i];
                T[i]=T[i+1];
                T[i+1]=temp;
                verifier=false;
            }
        }
    }while(verifier==false);
    for(int i=0;i<10;i++){
        if(T[i]!=0){
            printf("%d\n",T[i]);
        }
    }
    return 0;
}