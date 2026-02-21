#include <stdio.h>
int n,N,temp,T[100];
int main(){
    do{
        printf("saisir la taille de tableau n<100: ");
        scanf("%d",&n);
    }while(n>=100 || n<1);
    //saisir le tableau 
    for(int i=0;i<n;i++){
        printf("saisir l'entier numero %d : ",i+1);
        scanf("%d",&T[i]);
    }
    //affiche le tableau avant d'inverser 
    printf("le tableau avant l'inverser: \n");
    for(int i=0;i<n;i++){
        printf(" %d ",T[i]);
    }  
    printf("\n");
    //inverser et affiche 
    N=n-1;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<N;j++){
            temp=T[j];
            T[j]=T[j+1];
            T[j+1]=temp;
        }
        N--;
    }
    printf("le tableau apres l'inverser: \n");
    for(int i=0;i<n;i++){
        printf(" %d ",T[i]);
    }
    printf("\n");
    return 0;
} 