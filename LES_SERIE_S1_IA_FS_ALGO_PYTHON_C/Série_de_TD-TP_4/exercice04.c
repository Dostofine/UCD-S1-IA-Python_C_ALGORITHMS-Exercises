#include <stdio.h>
int NotesS_M,C_max;
float max,somme,moyenne,T[40];
int main(){
    somme=0;
    for(int i=0;i<40;i++){
        printf("saisir la note %d ",i+1);
        scanf("%f",&T[i]);
        somme+=T[i];
    }
    moyenne=somme/40;
    max=T[0];
    for(int i=0;i<40;i++){
        if(T[i]>max)
            max=T[i];
        if(T[i]>moyenne)
            NotesS_M++;
    }
    for(int i=0;i<40;i++){
        if(T[i]==max)
            C_max++;
    }
    printf("le nombre des notes supérieures strictement à la moyenne %f  est %d\n",moyenne,NotesS_M);
    printf("le nombre d’occurrence de la note maximale est %d\n",C_max);
    return 0;
}