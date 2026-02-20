#include <stdio.h>
int N_maj,N_let;
char T[10];
int main(){
    for(int i=0;i<10;i++){
        printf("saisir le caractere %d : ",i+1);
        scanf(" %c",&T[i]);
        if(T[i]<='Z' && T[i]>='A')
            N_maj++;
        else if(T[i]<='z' && T[i]>='a')
            N_let++;
    }
    printf("le nombre de majuscules est : %d\n",N_maj);
    printf("le nombre de lettres est : %d\n",N_let);
    return 0;
}