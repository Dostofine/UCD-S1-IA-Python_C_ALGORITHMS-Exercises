#include <stdio.h>
int max_pos,i;
float max,T[1000];
int main(){
    i=0;
    do{
        printf("saisir le nombre numero %d : ",i+1);
        scanf("%f",&T[i]);
        i++;
    }while(i<1000 && T[i-1]!=0);
    max=T[0];
    max_pos=0;
    for(int j=0;j<i;j++){
        if(T[j]>=max){
            max=T[j];
            max_pos=j+1;
        }
    }
    printf("le plus grand parmi ces nombres est: %f\n",max);
    printf("et sa position est: %d\n",max_pos);
    return 0;
}