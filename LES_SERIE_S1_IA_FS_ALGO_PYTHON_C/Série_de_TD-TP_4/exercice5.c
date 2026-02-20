#include <stdio.h>
int min,max,T[10];
int main(){
    for(int i=0;i<10;i++){
        printf("saisir l'entier %d ",i+1);
        scanf("%d",&T[i]);
    }
    min=T[0];
    max=T[5];
    for(int i=0;i<10;i++){
        if(i<=4){
            if(T[i]<min)
                min=T[i];
        }
        else{
            if(T[i]>max)
                max=T[i];
        }
    }
    printf("le minimum de la 1ère moitié : %d\n",min);
    printf("le maximum de sa 2ème moitié : %d\n",max);
    return 0;
}