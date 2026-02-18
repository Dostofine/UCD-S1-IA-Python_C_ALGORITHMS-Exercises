#include <stdio.h>
int max, max_pos,T[6];
int main(){
    for(int i=0;i<6;i++){
        printf("saisir le nombre numero %d: ",i+1);
        scanf("%d",&T[i]);
    }
    max=T[0];
    max_pos=0;
    for(int i=0;i<6;i++){
        if(T[i]>max){
            max=T[i];
            max_pos=i+1;
        }
    } 
    printf("Le plus grand de ces nombres est: ",max);
    printf("C’était le nombre numéro: ",max_pos);
    return 0;
}
