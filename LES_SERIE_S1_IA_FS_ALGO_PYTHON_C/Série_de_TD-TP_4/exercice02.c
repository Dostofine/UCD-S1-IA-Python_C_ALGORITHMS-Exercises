#include <stdio.h>
int min,min_pos,T[30];
int main(){
    for(int i=0;i<30;i++){
        printf("saisir l'entier numero %d: ",i+1);
        scanf("%d",&T[i]);
    }
    min=T[0];
    for(int i=0;i<30;i++){
        if(T[i]<=min){
            min=T[i];
            min_pos=i+1;
        }
    }
    printf("le plus petit élément de ce tableau est : %d\n",min);
    printf("et sa position est %d\n",min_pos);
    return 0;
}
